# Standalone Makefile for libcam.hal3a.v3.nvram.50.so
CC = /media/dev/work/flutter_dev/portable_sdk/android-sdk/ndk/28.0.12433566/toolchains/llvm/prebuilt/linux-x86_64/bin/armv7a-linux-androideabi30-clang++
CFLAGS = -O2 -Wall -Wno-unused-parameter -fPIC -I/media/dev/work/begonia_blobs_code/source_code/include
LDFLAGS = -shared -fPIC -llog

all: libcam.hal3a.v3.nvram.50.so

libcam.hal3a.v3.nvram.50.so: libcam_hal3a_v3_nvram_50.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f libcam.hal3a.v3.nvram.50.so
