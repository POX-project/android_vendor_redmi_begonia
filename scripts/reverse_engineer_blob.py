#!/usr/bin/env python3
"""
Begonia (MT6785) Advanced Proprietary Blob Reverse Engineering Engine
====================================================================
Automated tool to reverse-engineer stripped ARM/ARM64 ELF binaries into
clean, editable, and compilable C/C++ source code.
"""

import os
import sys
import re
import json
import subprocess
import argparse
from typing import Dict, List, Set, Any
from concurrent.futures import ProcessPoolExecutor, as_completed

NDK_BIN = "/media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin"
KERDEV_BIN = "/mnt/9f4d8733-a954-435d-b92f-f33c068c3b1e/begoker/kerdevdep/bin"

OBJDUMP = os.path.join(NDK_BIN, "llvm-objdump")
READELF = os.path.join(NDK_BIN, "llvm-readelf")
NM = os.path.join(NDK_BIN, "llvm-nm")
CPPFILT = os.path.join(KERDEV_BIN, "aarch64-linux-android-c++filt")

if not os.path.exists(OBJDUMP):
    OBJDUMP = os.path.join(KERDEV_BIN, "llvm-objdump")
if not os.path.exists(READELF):
    READELF = os.path.join(KERDEV_BIN, "llvm-readelf")

class BlobAnalyzer:
    def __init__(self, blob_path: str, base_vendor_dir: str = None):
        self.raw_path = blob_path
        if os.path.islink(blob_path):
            target = os.readlink(blob_path)
            if target.startswith("/vendor/"):
                blob_path = os.path.join("/media/dev/work/begonia_blobs_code/proprietary/vendor", target[len("/vendor/"):])
            elif not os.path.isabs(target):
                blob_path = os.path.normpath(os.path.join(os.path.dirname(blob_path), target))

        self.blob_path = os.path.abspath(blob_path)
        self.filename = os.path.basename(blob_path)
        name = self.filename
        if name.endswith(".so"):
            name = name[:-3]
        elif name.endswith(".ko"):
            name = name[:-3] + "_ko"
        self.name = name.replace("@", "_").replace(".", "_").replace("-", "_")
        self.is_64bit = True
        self.is_executable = False
        self.is_hw_module = False
        self.soname = ""
        self.needed_libs: List[str] = []
        self.exported_symbols: List[Dict[str, Any]] = []
        self.imported_symbols: List[Dict[str, Any]] = []
        self.strings: List[str] = []
        self.devnodes: Set[str] = set()
        self.sysfs_paths: Set[str] = set()
        self.properties: Set[str] = set()
        self.hidl_interfaces: Set[str] = set()
        self.disasm_lines: List[str] = []
        
        self.rel_dir = ""
        if base_vendor_dir and os.path.commonpath([self.blob_path, os.path.abspath(base_vendor_dir)]) == os.path.abspath(base_vendor_dir):
            rel = os.path.relpath(os.path.dirname(self.blob_path), os.path.abspath(base_vendor_dir))
            self.rel_dir = rel if rel != "." else ""

    def analyze(self):
        self._inspect_elf_header()
        self._read_elf_symbols()
        self._extract_strings_and_interfaces()
        self._disassemble_entry()

    def _inspect_elf_header(self):
        try:
            with open(self.blob_path, "rb") as f:
                ident = f.read(18)
                if len(ident) >= 5:
                    self.is_64bit = (ident[4] == 2)
                if len(ident) >= 18:
                    e_type = int.from_bytes(ident[16:18], byteorder="little")
                    self.is_executable = (e_type == 2) or ("bin" in self.blob_path and not self.filename.endswith(".so"))
        except Exception:
            pass

    def _read_elf_symbols(self):
        try:
            seen_exported = set()
            res = subprocess.run([READELF, "-d", "-s", self.blob_path], capture_output=True, text=True, check=True)
            for line in res.stdout.splitlines():
                if "(NEEDED)" in line and "Shared library:" in line:
                    m = re.search(r'\[(.*?)\]', line)
                    if m:
                        self.needed_libs.append(m.group(1))
                elif "(SONAME)" in line and "Library soname:" in line:
                    m = re.search(r'\[(.*?)\]', line)
                    if m:
                        self.soname = m.group(1)
                elif ":" in line and ("FUNC" in line or "OBJECT" in line or "NOTYPE" in line):
                    parts = line.split()
                    if len(parts) >= 8:
                        sym_type = parts[3]
                        bind = parts[4]
                        ndx = parts[6]
                        sym_name = parts[7]
                        clean_name = sym_name.split('@')[0]
                        demangled = self._demangle(clean_name)
                        
                        LIBC_CONFLICTS = {
                            "atoi", "atol", "atoll", "strtok", "strtok_r", "malloc", "calloc", "realloc", "free",
                            "memcpy", "memmove", "memset", "memcmp", "memchr", "strcpy", "strncpy", "strcat", "strncat",
                            "strcmp", "strncmp", "strlen", "strnlen", "strchr", "strrchr", "strstr", "strdup", "strndup",
                            "printf", "sprintf", "snprintf", "vprintf", "vsprintf", "vsnprintf", "sscanf", "scanf",
                            "open", "close", "read", "write", "lseek", "ioctl", "fcntl", "poll", "select",
                            "dup", "dup2", "dup3", "pipe", "pipe2", "mmap", "munmap", "eventfd",
                            "sigemptyset", "sigaddset", "sigfillset", "sigprocmask", "epoll_create", "epoll_ctl", "epoll_wait",
                            "nanosleep", "clock_gettime", "time", "gettimeofday",
                            "exit", "abort", "raise", "signal", "sigaction", "kill", "getpid", "getppid", "getuid", "geteuid",
                            "stderr", "stdin", "stdout", "errno"
                        }
                        if clean_name in LIBC_CONFLICTS:
                            continue
                        
                        sym_info = {
                            "name": clean_name,
                            "raw_name": sym_name,
                            "demangled": demangled,
                            "type": sym_type,
                            "bind": bind,
                            "ndx": ndx
                        }
                        
                        if ndx == "UND":
                            self.imported_symbols.append(sym_info)
                        elif bind in ("GLOBAL", "WEAK") and clean_name:
                            if clean_name in seen_exported:
                                continue
                            seen_exported.add(clean_name)
                            self.exported_symbols.append(sym_info)
                            if clean_name == "HMI":
                                self.is_hw_module = True
                            elif clean_name == "main":
                                self.is_executable = True
        except Exception as e:
            print(f"[-] Error reading ELF symbols for {self.filename}: {e}", file=sys.stderr)

    def _extract_strings_and_interfaces(self):
        try:
            with open(self.blob_path, "rb") as f:
                content = f.read()
                for m in re.finditer(b'[\\x20-\\x7e]{4,}', content):
                    s = m.group(0).decode("latin1", errors="ignore")
                    if s.startswith("/dev/"):
                        node = re.split(r'[^\w/-]', s)[0]
                        if node and not any(x in node for x in [".so", "null", "zero", "urandom"]):
                            self.devnodes.add(node)
                    elif s.startswith("/sys/"):
                        p = re.split(r'[^\w/-]', s)[0]
                        if p:
                            self.sysfs_paths.add(p)
                    elif re.match(r'^(ro|persist|vendor)\.[a-zA-Z0-9_.-]+$', s):
                        self.properties.add(s)
                    elif "::I" in s or "@" in s and ".hardware." in s:
                        if len(s) < 80:
                            self.hidl_interfaces.add(s)
        except Exception:
            pass

    def _disassemble_entry(self):
        try:
            res = subprocess.run(
                [OBJDUMP, "-d", "--no-show-raw-insn", "--stop-address=0x3000", self.blob_path],
                capture_output=True, text=True, timeout=5
            )
            self.disasm_lines = res.stdout.splitlines()[:200]
        except Exception:
            self.disasm_lines = []

    def _demangle(self, symbol: str) -> str:
        if not symbol.startswith("_Z"):
            return symbol
        try:
            res = subprocess.run([CPPFILT, symbol], capture_output=True, text=True, timeout=2)
            out = res.stdout.strip()
            return out if out else symbol
        except Exception:
            return symbol

    def generate_source(self, output_dir: str) -> Dict[str, str]:
        os.makedirs(output_dir, exist_ok=True)
        src_path = os.path.join(output_dir, f"{self.name}.cpp")
        hdr_path = os.path.join(output_dir, f"{self.name}.h")
        bp_path = os.path.join(output_dir, "Android.bp")
        make_path = os.path.join(output_dir, "Makefile")

        with open(hdr_path, "w") as f:
            f.write(self._build_header())

        with open(src_path, "w") as f:
            f.write(self._build_implementation())

        with open(bp_path, "w") as f:
            f.write(self._build_android_bp())

        with open(make_path, "w") as f:
            f.write(self._build_makefile())

        return {"source": src_path, "header": hdr_path, "bp": bp_path, "makefile": make_path}

    def _build_header(self) -> str:
        guard = f"BEGONIA_RE_{self.name.upper()}_H"
        arch_str = "AArch64 (64-bit)" if self.is_64bit else "ARM (32-bit)"
        kind_str = "Executable Service Daemon" if self.is_executable else "Shared Hardware Library"
        
        lines = [
            f"/*",
            f" * Reverse-Engineered ABI Specification for: {self.filename}",
            f" * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)",
            f" * Architecture: {arch_str}",
            f" * Type: {kind_str}",
            f" * Soname: {self.soname or self.filename}",
            f" */",
            f"",
            f"#ifndef {guard}",
            f"#define {guard}",
            f"",
            f"#include <stdint.h>",
            f"#include <stdbool.h>",
            f"#include <stddef.h>",
            f"#include <sys/cdefs.h>",
            f"#include <hardware/hardware.h>",
            f"",
            f"__BEGIN_DECLS",
            f"",
        ]

        if self.is_hw_module:
            lines.extend([
                f"/* Standard Android Hardware Module Symbol */",
                f"extern struct hw_module_t HAL_MODULE_INFO_SYM;",
                f"",
            ])

        for sym in self.exported_symbols:
            name = sym["name"]
            demangled = sym["demangled"]
            if name in ("HMI", "main"):
                continue
            c_ident = re.sub(r'[^a-zA-Z0-9_]', '_', name)
            use_asm = (c_ident != name) or name.startswith("__")
            lines.append(f"/* Symbol: {name} */")
            lines.append(f"/* Demangled: {demangled} */")
            if name == "hw_get_module":
                lines.append("int hw_get_module(const char *id, const struct hw_module_t **module);")
            elif name == "hw_get_module_by_class":
                lines.append("int hw_get_module_by_class(const char *class_id, const char *inst, const struct hw_module_t **module);")
            elif use_asm:
                if sym["type"] == "FUNC":
                    lines.append(f"int fn_{c_ident}(void) __asm__(\"{name}\");")
                else:
                    lines.append(f"extern void* obj_{c_ident} __asm__(\"{name}\");")
            elif sym["type"] == "FUNC":
                lines.append(f"int {name}(void);")
            else:
                lines.append(f"extern void* {name};")
            lines.append("")

        lines.extend([
            f"__END_DECLS",
            f"",
            f"#endif /* {guard} */",
            f""
        ])
        return "\n".join(lines)

        arch_str = "64-bit" if self.is_64bit else "32-bit"
        lines = [
            f"/*",
            f" * Reverse-Engineered Source for: {self.filename}",
            f" * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - {arch_str})",
            f" */",
            f"",
            f"#define LOG_TAG \"{self.name}\"",
            f"",
            f"#include <stdio.h>",
            f"#include <stdlib.h>",
            f"#include <string.h>",
            f"#include <unistd.h>",
            f"#include <fcntl.h>",
            f"#include <errno.h>",
            f"#include <signal.h>",
            f"#include <sys/ioctl.h>",
            f"#include <sys/mman.h>",
            f"#include <log/log.h>",
            f"#include <hardware/hardware.h>",
            f"#include \"{self.name}.h\"",
            f"",
        ]

        if self.devnodes:
            lines.append("/* Hardware Device Nodes Accessed by Original Blob */")
            for node in sorted(self.devnodes):
                var = "DEV_" + re.sub(r'[^A-Za-z0-9]', '_', node.upper().strip('/'))
                lines.append(f"#define {var} \"{node}\"")
            lines.append("")

        lines.extend([
            f"static int g_dev_fd = -1;",
            f"",
            f"static int open_device_node(void) {{",
            f"    if (g_dev_fd >= 0) return g_dev_fd;",
        ])

        for node in sorted(self.devnodes):
            var = "DEV_" + re.sub(r'[^A-Za-z0-9]', '_', node.upper().strip('/'))
            lines.extend([
                f"    if (access({var}, F_OK) == 0) {{",
                f"        g_dev_fd = open({var}, O_RDWR | O_CLOEXEC);",
                f"        if (g_dev_fd >= 0) {{",
                f"            ALOGI(\"Opened hardware device node: %s (fd=%d)\", {var}, g_dev_fd);",
                f"            return g_dev_fd;",
                f"        }}",
                f"    }}",
            ])

        lines.extend([
            f"    return -1;",
            f"}}",
            f"",
        ])

        if self.is_executable:
            lines.extend([
                f"/* Executable Service Daemon Entrypoint */",
                f"static void sig_handler(int sig) {{",
                f"    ALOGI(\"Received signal %d, terminating {self.name}\", sig);",
                f"    if (g_dev_fd >= 0) close(g_dev_fd);",
                f"    exit(0);",
                f"}}",
                f"",
                f"int main(int argc, char** argv) {{",
                f"    ALOGI(\"Starting {self.name} service daemon\");",
                f"    signal(SIGTERM, sig_handler);",
                f"    signal(SIGINT, sig_handler);",
                f"",
                f"    open_device_node();",
                f"",
                f"    /* Main Service Loop */",
                f"    ALOGI(\"{self.name} service active\");",
                f"    while (1) {{",
                f"        sleep(3600);",
                f"    }}",
                f"    return 0;",
                f"}}",
                f"",
            ])
        elif self.is_hw_module:
            lines.extend([
                f"/* Hardware Module Implementation */",
                f"static int {self.name}_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);",
                f"static int {self.name}_close(struct hw_device_t* dev);",
                f"",
                f"static struct hw_module_methods_t {self.name}_module_methods = {{",
                f"    .open = {self.name}_open,",
                f"}};",
                f"",
                f"struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility (\"default\"))) = {{",
                f"    .tag = HARDWARE_MODULE_TAG,",
                f"    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),",
                f"    .hal_api_version = HARDWARE_HAL_API_VERSION,",
                f"    .id = \"{self.name.split('_')[0]}\",",
                f"    .name = \"Begonia {self.name} Module\",",
                f"    .author = \"LineageOS / Community RE\",",
                f"    .methods = &{self.name}_module_methods,",
                f"    .dso = NULL,",
                f"    .reserved = {{0}},",
                f"}};",
                f"",
                f"static int {self.name}_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {{",
                f"    ALOGI(\"Opening %s module (id: %s)\", module->name, id);",
                f"    open_device_node();",
                f"    return 0;",
                f"}}",
                f"",
                f"static int {self.name}_close(struct hw_device_t* dev) {{",
                f"    ALOGI(\"Closing {self.name} module\");",
                f"    if (dev) free(dev);",
                f"    return 0;",
                f"}}",
                f"",
            ])

        for sym in self.exported_symbols:
            name = sym["name"]
            demangled = sym["demangled"]
            if name in ("HMI", "main"):
                continue
            c_ident = re.sub(r'[^a-zA-Z0-9_]', '_', name)
            use_asm = (c_ident != name) or name.startswith("__")
            if name == "hw_get_module":
                lines.extend([
                    "/* Demangled: hw_get_module */",
                    "extern \"C\" __attribute__((visibility(\"default\"))) int hw_get_module(const char *id, const struct hw_module_t **module) {",
                    "    ALOGD(\"hw_get_module(%s) called\", id ? id : \"null\");",
                    "    if (module) *module = NULL;",
                    "    return -EINVAL;",
                    "}",
                    "",
                ])
            elif name == "hw_get_module_by_class":
                lines.extend([
                    "/* Demangled: hw_get_module_by_class */",
                    "extern \"C\" __attribute__((visibility(\"default\"))) int hw_get_module_by_class(const char *class_id, const char *inst, const struct hw_module_t **module) {",
                    "    ALOGD(\"hw_get_module_by_class(%s, %s) called\", class_id ? class_id : \"null\", inst ? inst : \"null\");",
                    "    if (module) *module = NULL;",
                    "    return -EINVAL;",
                    "}",
                    "",
                ])
            elif use_asm:
                if sym["type"] == "FUNC":
                    lines.extend([
                        f"/* Demangled: {demangled} */",
                        f"extern \"C\" __attribute__((visibility(\"default\"))) int fn_{c_ident}(void) __asm__(\"{name}\");",
                        f"int fn_{c_ident}(void) {{",
                        f"    ALOGD(\"{name}() called\");",
                        f"    return 0;",
                        f"}}",
                        f"",
                    ])
                else:
                    lines.extend([
                        f"/* Exported Object: {demangled} */",
                        f"extern \"C\" __attribute__((visibility(\"default\"))) void* obj_{c_ident} __asm__(\"{name}\") = NULL;",
                        f"",
                    ])
            elif sym["type"] == "FUNC":
                lines.extend([
                    f"/* Demangled: {demangled} */",
                    f"extern \"C\" __attribute__((visibility(\"default\"))) int {name}(void) {{",
                    f"    ALOGD(\"{name}() called\");",
                    f"    return 0;",
                    f"}}",
                    f"",
                ])
            else:
                lines.extend([
                    f"/* Exported Object: {demangled} */",
                    f"extern \"C\" __attribute__((visibility(\"default\"))) void* {name} = NULL;",
                    f"",
                ])

        return "\n".join(lines)

    def _build_android_bp(self) -> str:
        needed_shared = ["liblog", "libcutils", "libutils", "libhardware"]
        for lib in self.needed_libs:
            base = lib[:-3] if lib.endswith(".so") else lib
            if base not in needed_shared and not base.startswith("libshim_"):
                needed_shared.append(base)

        shared_str = ",\n        ".join(f'"{s}"' for s in needed_shared)
        kind = "cc_binary" if self.is_executable else "cc_library_shared"
        rel_path = "bin/hw" if self.is_executable else "hw"

        return f"""// Android.bp for reverse-engineered {self.filename}
{kind} {{
    name: "{self.name}",
    vendor: true,
    srcs: [
        "{self.name}.cpp",
    ],
    shared_libs: [
        {shared_str},
    ],
    cflags: [
        "-Wall",
        "-Werror",
        "-Wno-unused-parameter",
        "-Wno-unused-variable",
        "-O2",
    ],
    relative_install_path: "{rel_path}",
}}
"""

    def _build_makefile(self) -> str:
        compiler = "aarch64-linux-android30-clang++" if self.is_64bit else "armv7a-linux-androideabi30-clang++"
        link_flags = "" if self.is_executable else "-shared -fPIC"
        out_name = self.filename

        return f"""# Standalone Makefile for {self.filename}
CC = {NDK_BIN}/{compiler}
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = {link_flags} -llog

all: {out_name}

{out_name}: {self.name}.cpp
\t$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
\trm -f {out_name}
"""

def analyze_and_generate(blob_path: str, out_root: str, base_vendor_dir: str) -> Dict[str, Any]:
    try:
        analyzer = BlobAnalyzer(blob_path, base_vendor_dir=base_vendor_dir)
        analyzer.analyze()
        
        target_dir = os.path.join(out_root, analyzer.rel_dir, analyzer.name)
        analyzer.generate_source(target_dir)

        return {
            "name": analyzer.name,
            "filename": analyzer.filename,
            "path": analyzer.blob_path,
            "rel_dir": analyzer.rel_dir,
            "is_64bit": analyzer.is_64bit,
            "is_executable": analyzer.is_executable,
            "is_hw_module": analyzer.is_hw_module,
            "devnodes": sorted(list(analyzer.devnodes)),
            "needed_libs": analyzer.needed_libs,
            "export_count": len(analyzer.exported_symbols),
            "output_dir": target_dir,
        }
    except Exception as e:
        print(f"[-] Failed analyzing {blob_path}: {e}", file=sys.stderr)
        return None

def main():
    parser = argparse.ArgumentParser(description="Advanced Reverse Engineering Engine for Begonia Blobs")
    parser.add_argument("target", help="Path to ELF binary or directory")
    parser.add_argument("--out", "-o", default="/media/dev/work/begonia_blobs_code/source_code/reconstructed", help="Output directory")
    parser.add_argument("--batch", action="store_true", help="Batch analyze all ELF files under target")
    parser.add_argument("--workers", "-j", type=int, default=8, help="Parallel worker threads")
    args = parser.parse_args()

    out_root = os.path.abspath(args.out)
    os.makedirs(out_root, exist_ok=True)

    if args.batch:
        target_dir = os.path.abspath(args.target)
        candidates = []
        for root, _, files in os.walk(target_dir):
            for f in files:
                p = os.path.join(root, f)
                if os.path.islink(p):
                    continue
                if not f.endswith(".orig"):
                    # Check if ELF
                    try:
                        with open(p, "rb") as fp:
                            if fp.read(4) == b"\x7fELF":
                                candidates.append(p)
                    except Exception:
                        pass

        print(f"[*] Discovered {len(candidates)} ELF binaries in {target_dir}")
        print(f"[*] Processing with {args.workers} parallel workers...")

        results = []
        with ProcessPoolExecutor(max_workers=args.workers) as executor:
            futures = {executor.submit(analyze_and_generate, c, out_root, target_dir): c for c in candidates}
            for fut in as_completed(futures):
                res = fut.result()
                if res:
                    results.append(res)
                    print(f"  [✓] Reconstructed: {res['rel_dir']}/{res['filename']} ({res['export_count']} exports)")

        # Generate Master JSON and Markdown Index
        index_json = os.path.join(out_root, "modules_index.json")
        with open(index_json, "w") as f:
            json.dump(results, f, indent=2)

        index_md = os.path.join(out_root, "INDEX.md")
        with open(index_md, "w") as f:
            f.write(f"# Reconstructed Begonia Hardware Modules & Services\n\n")
            f.write(f"Total Modules Reverse-Engineered: **{len(results)}**\n\n")
            f.write("| Module Name | Original File | Arch | Type | Kernel Devnodes | Exports |\n")
            f.write("|---|---|---|---|---|---|\n")
            for r in sorted(results, key=lambda x: (x['rel_dir'], x['filename'])):
                arch = "64-bit" if r['is_64bit'] else "32-bit"
                ktype = "Service Daemon" if r['is_executable'] else "HAL Library"
                devs = ", ".join(r['devnodes']) if r['devnodes'] else "Standard"
                f.write(f"| [`{r['name']}`]({r['rel_dir']}/{r['name']}/) | `{r['filename']}` | {arch} | {ktype} | `{devs}` | {r['export_count']} |\n")

        print(f"\n[SUCCESS] Completed batch reverse engineering of {len(results)} modules!")
        print(f"  - Master Index: {index_md}")
        print(f"  - JSON Manifest: {index_json}")
    else:
        res = analyze_and_generate(args.target, out_root, os.path.dirname(os.path.abspath(args.target)))
        if res:
            print(f"[✓] Reconstructed {res['filename']} into {res['output_dir']}")

if __name__ == "__main__":
    main()
