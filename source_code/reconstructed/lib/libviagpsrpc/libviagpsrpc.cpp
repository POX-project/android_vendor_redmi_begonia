/*
 * Reverse-Engineered Source for: libviagpsrpc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libviagpsrpc"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libviagpsrpc.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CCCI2_AUD "/dev/ccci2_aud"
#define DEV_DEV_CCCI2_FS "/dev/ccci2_fs"
#define DEV_DEV_CCCI2_IMSA "/dev/ccci2_imsa"
#define DEV_DEV_CCCI2_IOCTL0 "/dev/ccci2_ioctl0"
#define DEV_DEV_CCCI2_IOCTL1 "/dev/ccci2_ioctl1"
#define DEV_DEV_CCCI2_IOCTL2 "/dev/ccci2_ioctl2"
#define DEV_DEV_CCCI2_IOCTL3 "/dev/ccci2_ioctl3"
#define DEV_DEV_CCCI2_IOCTL4 "/dev/ccci2_ioctl4"
#define DEV_DEV_CCCI2_IPC_0 "/dev/ccci2_ipc_0"
#define DEV_DEV_CCCI2_IPC_2 "/dev/ccci2_ipc_2"
#define DEV_DEV_CCCI2_IPC_4 "/dev/ccci2_ipc_4"
#define DEV_DEV_CCCI2_MD_LOG_CTRL "/dev/ccci2_md_log_ctrl"
#define DEV_DEV_CCCI2_MONITOR "/dev/ccci2_monitor"
#define DEV_DEV_CCCI2_RPC "/dev/ccci2_rpc"
#define DEV_DEV_CCCI2_TTY0 "/dev/ccci2_tty0"
#define DEV_DEV_CCCI2_TTY1 "/dev/ccci2_tty1"
#define DEV_DEV_CCCI2_TTY2 "/dev/ccci2_tty2"
#define DEV_DEV_CCCI2_TTY3 "/dev/ccci2_tty3"
#define DEV_DEV_CCCI3_AT "/dev/ccci3_at"
#define DEV_DEV_CCCI3_AT2 "/dev/ccci3_at2"
#define DEV_DEV_CCCI3_AT3 "/dev/ccci3_at3"
#define DEV_DEV_CCCI3_AT4 "/dev/ccci3_at4"
#define DEV_DEV_CCCI3_AT5 "/dev/ccci3_at5"
#define DEV_DEV_CCCI3_AT6 "/dev/ccci3_at6"
#define DEV_DEV_CCCI3_AT7 "/dev/ccci3_at7"
#define DEV_DEV_CCCI3_AT8 "/dev/ccci3_at8"
#define DEV_DEV_CCCI3_AUD "/dev/ccci3_aud"
#define DEV_DEV_CCCI3_FLS "/dev/ccci3_fls"
#define DEV_DEV_CCCI3_FS "/dev/ccci3_fs"
#define DEV_DEV_CCCI3_IOCTL1 "/dev/ccci3_ioctl1"
#define DEV_DEV_CCCI3_MD_LOG_CTRL "/dev/ccci3_md_log_ctrl"
#define DEV_DEV_CCCI3_MONITOR "/dev/ccci3_monitor"
#define DEV_DEV_CCCI3_RAW_AUDIO "/dev/ccci3_raw_audio"
#define DEV_DEV_CCCI3_TTY1 "/dev/ccci3_tty1"
#define DEV_DEV_CCCI3_TTY2 "/dev/ccci3_tty2"
#define DEV_DEV_CCCI_AUD "/dev/ccci_aud"
#define DEV_DEV_CCCI_C2K_AGPS "/dev/ccci_c2k_agps"
#define DEV_DEV_CCCI_CCB_DHL "/dev/ccci_ccb_dhl"
#define DEV_DEV_CCCI_CCB_MD_MONITOR "/dev/ccci_ccb_md_monitor"
#define DEV_DEV_CCCI_CCB_META "/dev/ccci_ccb_meta"
#define DEV_DEV_CCCI_FS "/dev/ccci_fs"
#define DEV_DEV_CCCI_IMSA "/dev/ccci_imsa"
#define DEV_DEV_CCCI_IMSC "/dev/ccci_imsc"
#define DEV_DEV_CCCI_IMSDC "/dev/ccci_imsdc"
#define DEV_DEV_CCCI_IMSEM "/dev/ccci_imsem"
#define DEV_DEV_CCCI_IMSM "/dev/ccci_imsm"
#define DEV_DEV_CCCI_IMSV "/dev/ccci_imsv"
#define DEV_DEV_CCCI_IOCTL0 "/dev/ccci_ioctl0"
#define DEV_DEV_CCCI_IOCTL1 "/dev/ccci_ioctl1"
#define DEV_DEV_CCCI_IOCTL2 "/dev/ccci_ioctl2"
#define DEV_DEV_CCCI_IOCTL3 "/dev/ccci_ioctl3"
#define DEV_DEV_CCCI_IOCTL4 "/dev/ccci_ioctl4"
#define DEV_DEV_CCCI_IPC_1220_0 "/dev/ccci_ipc_1220_0"
#define DEV_DEV_CCCI_IPC_2 "/dev/ccci_ipc_2"
#define DEV_DEV_CCCI_IPC_4 "/dev/ccci_ipc_4"
#define DEV_DEV_CCCI_IPC_9 "/dev/ccci_ipc_9"
#define DEV_DEV_CCCI_MD_LOG_CTRL "/dev/ccci_md_log_ctrl"
#define DEV_DEV_CCCI_MD_LOG_RX "/dev/ccci_md_log_rx"
#define DEV_DEV_CCCI_MD_LOG_TX "/dev/ccci_md_log_tx"
#define DEV_DEV_CCCI_MDL_MONITOR "/dev/ccci_mdl_monitor"
#define DEV_DEV_CCCI_MONITOR "/dev/ccci_monitor"
#define DEV_DEV_CCCI_PCM_RX "/dev/ccci_pcm_rx"
#define DEV_DEV_CCCI_PCM_TX "/dev/ccci_pcm_tx"
#define DEV_DEV_CCCI_RAW_AUDIO "/dev/ccci_raw_audio"
#define DEV_DEV_CCCI_RAW_DHL "/dev/ccci_raw_dhl"
#define DEV_DEV_CCCI_RAW_MDM "/dev/ccci_raw_mdm"
#define DEV_DEV_CCCI_RAW_NETD "/dev/ccci_raw_netd"
#define DEV_DEV_CCCI_RAW_USB "/dev/ccci_raw_usb"
#define DEV_DEV_CCCI_RPC "/dev/ccci_rpc"
#define DEV_DEV_CCCI_UEM_RX "/dev/ccci_uem_rx"
#define DEV_DEV_CCCI_UEM_TX "/dev/ccci_uem_tx"
#define DEV_DEV_CCCI_WIFI_PROXY "/dev/ccci_wifi_proxy"
#define DEV_DEV_CCCI_WOA "/dev/ccci_woa"
#define DEV_DEV_EEMCS_AUD "/dev/eemcs_aud"
#define DEV_DEV_EEMCS_CTRL "/dev/eemcs_ctrl"
#define DEV_DEV_EEMCS_FS "/dev/eemcs_fs"
#define DEV_DEV_EEMCS_IMSA "/dev/eemcs_imsa"
#define DEV_DEV_EEMCS_IMSC "/dev/eemcs_imsc"
#define DEV_DEV_EEMCS_IMSDC "/dev/eemcs_imsdc"
#define DEV_DEV_EEMCS_IMSV "/dev/eemcs_imsv"
#define DEV_DEV_EEMCS_IOCTL "/dev/eemcs_ioctl"
#define DEV_DEV_EEMCS_IPC_0 "/dev/eemcs_ipc_0"
#define DEV_DEV_EEMCS_IPC_2 "/dev/eemcs_ipc_2"
#define DEV_DEV_EEMCS_IPC_UART "/dev/eemcs_ipc_uart"
#define DEV_DEV_EEMCS_MD_LOG "/dev/eemcs_md_log"
#define DEV_DEV_EEMCS_MD_LOG_CTRL "/dev/eemcs_md_log_ctrl"
#define DEV_DEV_EEMCS_MUX "/dev/eemcs_mux"
#define DEV_DEV_EEMCS_MUXRP "/dev/eemcs_muxrp"
#define DEV_DEV_EEMCS_RIL "/dev/eemcs_ril"
#define DEV_DEV_EEMCS_RPC "/dev/eemcs_rpc"
#define DEV_DEV_EMD_CFIFO1 "/dev/emd_cfifo1"
#define DEV_DEV_EMD_CTL0 "/dev/emd_ctl0"
#define DEV_DEV_EMD_CTL1 "/dev/emd_ctl1"
#define DEV_DEV_EMD_CTL2 "/dev/emd_ctl2"
#define DEV_DEV_EMD_CTL3 "/dev/emd_ctl3"
#define DEV_DEV_EMD_CTL4 "/dev/emd_ctl4"
#define DEV_DEV_TTYC0 "/dev/ttyC0"
#define DEV_DEV_TTYC1 "/dev/ttyC1"
#define DEV_DEV_TTYC2 "/dev/ttyC2"
#define DEV_DEV_TTYC3 "/dev/ttyC3"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CCCI2_AUD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_AUD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_AUD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_FS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_FS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_FS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IMSA, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IMSA, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IMSA, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IOCTL0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IOCTL0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IOCTL0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IOCTL1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IOCTL1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IOCTL1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IOCTL2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IOCTL2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IOCTL2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IOCTL3, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IOCTL3, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IOCTL3, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IOCTL4, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IOCTL4, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IOCTL4, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IPC_0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IPC_0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IPC_0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IPC_2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IPC_2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IPC_2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_IPC_4, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_IPC_4, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_IPC_4, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_MD_LOG_CTRL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_MD_LOG_CTRL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_MD_LOG_CTRL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_MONITOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_MONITOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_MONITOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_RPC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_RPC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_RPC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_TTY0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_TTY0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_TTY0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_TTY1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_TTY1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_TTY1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_TTY2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_TTY2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_TTY2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI2_TTY3, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI2_TTY3, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI2_TTY3, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT3, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT3, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT3, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT4, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT4, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT4, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT5, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT5, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT5, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT6, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT6, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT6, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT7, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT7, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT7, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AT8, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AT8, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AT8, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_AUD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_AUD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_AUD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_FLS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_FLS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_FLS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_FS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_FS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_FS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_IOCTL1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_IOCTL1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_IOCTL1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_MD_LOG_CTRL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_MD_LOG_CTRL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_MD_LOG_CTRL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_MONITOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_MONITOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_MONITOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_RAW_AUDIO, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_RAW_AUDIO, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_RAW_AUDIO, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_TTY1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_TTY1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_TTY1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI3_TTY2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI3_TTY2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI3_TTY2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_AUD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_AUD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_AUD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_C2K_AGPS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_C2K_AGPS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_C2K_AGPS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_CCB_DHL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_CCB_DHL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_CCB_DHL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_CCB_MD_MONITOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_CCB_MD_MONITOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_CCB_MD_MONITOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_CCB_META, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_CCB_META, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_CCB_META, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_FS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_FS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_FS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IMSA, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IMSA, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IMSA, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IMSC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IMSC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IMSC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IMSDC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IMSDC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IMSDC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IMSEM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IMSEM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IMSEM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IMSM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IMSM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IMSM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IMSV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IMSV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IMSV, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IOCTL0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IOCTL0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IOCTL0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IOCTL1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IOCTL1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IOCTL1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IOCTL2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IOCTL2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IOCTL2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IOCTL3, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IOCTL3, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IOCTL3, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IOCTL4, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IOCTL4, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IOCTL4, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IPC_1220_0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IPC_1220_0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IPC_1220_0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IPC_2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IPC_2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IPC_2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IPC_4, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IPC_4, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IPC_4, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_IPC_9, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IPC_9, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IPC_9, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_MD_LOG_CTRL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_MD_LOG_CTRL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_MD_LOG_CTRL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_MD_LOG_RX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_MD_LOG_RX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_MD_LOG_RX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_MD_LOG_TX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_MD_LOG_TX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_MD_LOG_TX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_MDL_MONITOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_MDL_MONITOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_MDL_MONITOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_MONITOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_MONITOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_MONITOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_PCM_RX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_PCM_RX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_PCM_RX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_PCM_TX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_PCM_TX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_PCM_TX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_RAW_AUDIO, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_RAW_AUDIO, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_RAW_AUDIO, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_RAW_DHL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_RAW_DHL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_RAW_DHL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_RAW_MDM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_RAW_MDM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_RAW_MDM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_RAW_NETD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_RAW_NETD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_RAW_NETD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_RAW_USB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_RAW_USB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_RAW_USB, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_RPC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_RPC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_RPC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_UEM_RX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_UEM_RX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_UEM_RX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_UEM_TX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_UEM_TX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_UEM_TX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_WIFI_PROXY, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_WIFI_PROXY, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_WIFI_PROXY, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CCCI_WOA, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_WOA, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_WOA, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_AUD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_AUD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_AUD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_CTRL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_CTRL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_CTRL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_FS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_FS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_FS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IMSA, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IMSA, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IMSA, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IMSC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IMSC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IMSC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IMSDC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IMSDC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IMSDC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IMSV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IMSV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IMSV, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IOCTL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IOCTL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IOCTL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IPC_0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IPC_0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IPC_0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IPC_2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IPC_2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IPC_2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_IPC_UART, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_IPC_UART, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_IPC_UART, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_MD_LOG, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_MD_LOG, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_MD_LOG, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_MD_LOG_CTRL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_MD_LOG_CTRL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_MD_LOG_CTRL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_MUX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_MUX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_MUX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_MUXRP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_MUXRP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_MUXRP, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_RIL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_RIL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_RIL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EEMCS_RPC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EEMCS_RPC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EEMCS_RPC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EMD_CFIFO1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EMD_CFIFO1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EMD_CFIFO1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EMD_CTL0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EMD_CTL0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EMD_CTL0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EMD_CTL1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EMD_CTL1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EMD_CTL1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EMD_CTL2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EMD_CTL2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EMD_CTL2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EMD_CTL3, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EMD_CTL3, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EMD_CTL3, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EMD_CTL4, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EMD_CTL4, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EMD_CTL4, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYC0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYC0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYC0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYC1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYC1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYC1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYC2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYC2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYC2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYC3, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYC3, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYC3, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: gps_rpc_event_cb_func_0x00000001_svc */
extern "C" __attribute__((visibility("default"))) int gps_rpc_event_cb_func_0x00000001_svc(void) {
    ALOGD("gps_rpc_event_cb_func_0x00000001_svc() called");
    return 0;
}

/* Demangled: xdr_GpsPRMeasDataT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsPRMeasDataT(void) {
    ALOGD("xdr_GpsPRMeasDataT() called");
    return 0;
}

/* Demangled: xdr_GpsSocketCreateMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSocketCreateMsgT(void) {
    ALOGD("xdr_GpsSocketCreateMsgT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_ioctl_cb_data_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_ioctl_cb_data_t(void) {
    ALOGD("xdr_gps_rpc_ioctl_cb_data_t() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_report_satellite_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_report_satellite_t(void) {
    ALOGD("xdr_gps_rpc_report_satellite_t() called");
    return 0;
}

/* Demangled: xdr_server_open_status_t */
extern "C" __attribute__((visibility("default"))) int xdr_server_open_status_t(void) {
    ALOGD("xdr_server_open_status_t() called");
    return 0;
}

/* Demangled: gps_request_no_need_assist_data */
extern "C" __attribute__((visibility("default"))) int gps_request_no_need_assist_data(void) {
    ALOGD("gps_request_no_need_assist_data() called");
    return 0;
}

/* Demangled: gps_rpc_ioctl_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_ioctl_0x00000001(void) {
    ALOGD("gps_rpc_ioctl_0x00000001() called");
    return 0;
}

/* Demangled: gpsrpccbprog_0x00000001_freeresult */
extern "C" __attribute__((visibility("default"))) int gpsrpccbprog_0x00000001_freeresult(void) {
    ALOGD("gpsrpccbprog_0x00000001_freeresult() called");
    return 0;
}

/* Demangled: xdr_GpsSuplCDMAInformationT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSuplCDMAInformationT(void) {
    ALOGD("xdr_GpsSuplCDMAInformationT() called");
    return 0;
}

/* Exported Object: request_write_mutex */
extern "C" __attribute__((visibility("default"))) void* request_write_mutex = NULL;

/* Demangled: xdr_gps_rpc_loc_server_close_status_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_loc_server_close_status_t(void) {
    ALOGD("xdr_gps_rpc_loc_server_close_status_t() called");
    return 0;
}

/* Demangled: gps_report_prm_data */
extern "C" __attribute__((visibility("default"))) int gps_report_prm_data(void) {
    ALOGD("gps_report_prm_data() called");
    return 0;
}

/* Demangled: gps_set_mpc_servaddr */
extern "C" __attribute__((visibility("default"))) int gps_set_mpc_servaddr(void) {
    ALOGD("gps_set_mpc_servaddr() called");
    return 0;
}

/* Exported Object: nmea_counter */
extern "C" __attribute__((visibility("default"))) void* nmea_counter = NULL;

/* Exported Object: response_alm_mutex */
extern "C" __attribute__((visibility("default"))) void* response_alm_mutex = NULL;

/* Exported Object: test_mutex */
extern "C" __attribute__((visibility("default"))) void* test_mutex = NULL;

/* Demangled: xdr_GpsSocketCreateRspMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSocketCreateRspMsgT(void) {
    ALOGD("xdr_GpsSocketCreateRspMsgT() called");
    return 0;
}

/* Demangled: xdr_ValAppAddrT */
extern "C" __attribute__((visibility("default"))) int xdr_ValAppAddrT(void) {
    ALOGD("xdr_ValAppAddrT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_rat_mode_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_rat_mode_t(void) {
    ALOGD("xdr_gps_rpc_rat_mode_t() called");
    return 0;
}

/* Demangled: xdr_GpsPositionErrorT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsPositionErrorT(void) {
    ALOGD("xdr_GpsPositionErrorT() called");
    return 0;
}

/* Demangled: xdr_GpsSessionCfgRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSessionCfgRpcT(void) {
    ALOGD("xdr_GpsSessionCfgRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsSocketCloseRspMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSocketCloseRspMsgT(void) {
    ALOGD("xdr_GpsSocketCloseRspMsgT() called");
    return 0;
}

/* Demangled: eventQ_write */
extern "C" __attribute__((visibility("default"))) int eventQ_write(void) {
    ALOGD("eventQ_write() called");
    return 0;
}

/* Demangled: gps_request_gps_rat_mode_rsp */
extern "C" __attribute__((visibility("default"))) int gps_request_gps_rat_mode_rsp(void) {
    ALOGD("gps_request_gps_rat_mode_rsp() called");
    return 0;
}

/* Exported Object: test_cond */
extern "C" __attribute__((visibility("default"))) void* test_cond = NULL;

/* Demangled: xdr_gps_rpc_client_handle_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_client_handle_t(void) {
    ALOGD("xdr_gps_rpc_client_handle_t() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_report_nmea_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_report_nmea_t(void) {
    ALOGD("xdr_gps_rpc_report_nmea_t() called");
    return 0;
}

/* Demangled: gps_request_connection_status */
extern "C" __attribute__((visibility("default"))) int gps_request_connection_status(void) {
    ALOGD("gps_request_connection_status() called");
    return 0;
}

/* Demangled: xdr_GpsTimeMsgRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsTimeMsgRpcT(void) {
    ALOGD("xdr_GpsTimeMsgRpcT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_report_injectassist_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_report_injectassist_t(void) {
    ALOGD("xdr_gps_rpc_report_injectassist_t() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_server_req_cmd_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_server_req_cmd_t(void) {
    ALOGD("xdr_gps_rpc_server_req_cmd_t() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: xdr_GpsSystemTimeT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSystemTimeT(void) {
    ALOGD("xdr_GpsSystemTimeT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_report_ioctl_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_report_ioctl_t(void) {
    ALOGD("xdr_gps_rpc_report_ioctl_t() called");
    return 0;
}

/* Demangled: gps_request_send_poweron_ack */
extern "C" __attribute__((visibility("default"))) int gps_request_send_poweron_ack(void) {
    ALOGD("gps_request_send_poweron_ack() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_stop_fix_args */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_stop_fix_args(void) {
    ALOGD("xdr_gps_rpc_stop_fix_args() called");
    return 0;
}

/* Demangled: xdr_GpsFrameSyncRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsFrameSyncRpcT(void) {
    ALOGD("xdr_GpsFrameSyncRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsFreqAidingRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsFreqAidingRpcT(void) {
    ALOGD("xdr_GpsFreqAidingRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsLocRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsLocRpcT(void) {
    ALOGD("xdr_GpsLocRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsPRMeasRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsPRMeasRpcT(void) {
    ALOGD("xdr_GpsPRMeasRpcT() called");
    return 0;
}

/* Demangled: gps_request_ni_pos */
extern "C" __attribute__((visibility("default"))) int gps_request_ni_pos(void) {
    ALOGD("gps_request_ni_pos() called");
    return 0;
}

/* Demangled: xdr_GpsCTMpcCfgRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsCTMpcCfgRpcT(void) {
    ALOGD("xdr_GpsCTMpcCfgRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsCpLocRespRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsCpLocRespRpcT(void) {
    ALOGD("xdr_GpsCpLocRespRpcT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_open_args */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_open_args(void) {
    ALOGD("xdr_gps_rpc_open_args() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_start_fix_args */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_start_fix_args(void) {
    ALOGD("xdr_gps_rpc_start_fix_args() called");
    return 0;
}

/* Demangled: xdr_GpsRpcFixModeT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsRpcFixModeT(void) {
    ALOGD("xdr_GpsRpcFixModeT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_fix_mode_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_fix_mode_t(void) {
    ALOGD("xdr_gps_rpc_fix_mode_t() called");
    return 0;
}

/* Demangled: xdr_stop_gps_fix */
extern "C" __attribute__((visibility("default"))) int xdr_stop_gps_fix(void) {
    ALOGD("xdr_stop_gps_fix() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: gps_request_refloc_data */
extern "C" __attribute__((visibility("default"))) int gps_request_refloc_data(void) {
    ALOGD("gps_request_refloc_data() called");
    return 0;
}

/* Demangled: gps_request_time_aiding */
extern "C" __attribute__((visibility("default"))) int gps_request_time_aiding(void) {
    ALOGD("gps_request_time_aiding() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_version_rets */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_version_rets(void) {
    ALOGD("xdr_gps_rpc_version_rets() called");
    return 0;
}

/* Demangled: xdr_GpsFakePowerOnRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsFakePowerOnRpcT(void) {
    ALOGD("xdr_GpsFakePowerOnRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsSocketCloseMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSocketCloseMsgT(void) {
    ALOGD("xdr_GpsSocketCloseMsgT() called");
    return 0;
}

/* Demangled: gps_rpc_ioctl_process_cb */
extern "C" __attribute__((visibility("default"))) int gps_rpc_ioctl_process_cb(void) {
    ALOGD("gps_rpc_ioctl_process_cb() called");
    return 0;
}

/* Demangled: gps_rpc_apicb_app_init */
extern "C" __attribute__((visibility("default"))) int gps_rpc_apicb_app_init(void) {
    ALOGD("gps_rpc_apicb_app_init() called");
    return 0;
}

/* Demangled: xdr_GpsCustomerSettingT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsCustomerSettingT(void) {
    ALOGD("xdr_GpsCustomerSettingT() called");
    return 0;
}

/* Demangled: gpsrpccbprog_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gpsrpccbprog_0x00000001(void) {
    ALOGD("gpsrpccbprog_0x00000001() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_cb_rets */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_cb_rets(void) {
    ALOGD("xdr_gps_rpc_cb_rets() called");
    return 0;
}

/* Demangled: xdr_GpsAADataRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsAADataRpcT(void) {
    ALOGD("xdr_GpsAADataRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsLocRptRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsLocRptRpcT(void) {
    ALOGD("xdr_GpsLocRptRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsPowerOnRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsPowerOnRpcT(void) {
    ALOGD("xdr_GpsPowerOnRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsPpmReqCmdT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsPpmReqCmdT(void) {
    ALOGD("xdr_GpsPpmReqCmdT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_status_event_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_status_event_t(void) {
    ALOGD("xdr_gps_rpc_status_event_t() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: gps_request_rat_mode_setting */
extern "C" __attribute__((visibility("default"))) int gps_request_rat_mode_setting(void) {
    ALOGD("gps_request_rat_mode_setting() called");
    return 0;
}

/* Demangled: gps_request_start_fix */
extern "C" __attribute__((visibility("default"))) int gps_request_start_fix(void) {
    ALOGD("gps_request_start_fix() called");
    return 0;
}

/* Demangled: xdr_GpsTcpbSendDataMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsTcpbSendDataMsgT(void) {
    ALOGD("xdr_GpsTcpbSendDataMsgT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_status_event_data_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_status_event_data_t(void) {
    ALOGD("xdr_gps_rpc_status_event_data_t() called");
    return 0;
}

/* Demangled: silence_snprintf */
extern "C" __attribute__((visibility("default"))) int silence_snprintf(void) {
    ALOGD("silence_snprintf() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_cb_event_payload_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_cb_event_payload_t(void) {
    ALOGD("xdr_gps_rpc_cb_event_payload_t() called");
    return 0;
}

/* Demangled: xdr_GpsAfltPilotMeasurementT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsAfltPilotMeasurementT(void) {
    ALOGD("xdr_GpsAfltPilotMeasurementT() called");
    return 0;
}

/* Demangled: xdr_GpsConnectionStatusMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsConnectionStatusMsgT(void) {
    ALOGD("xdr_GpsConnectionStatusMsgT() called");
    return 0;
}

/* Demangled: xdr_GpsIonRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsIonRpcT(void) {
    ALOGD("xdr_GpsIonRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsQosT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsQosT(void) {
    ALOGD("xdr_GpsQosT() called");
    return 0;
}

/* Demangled: gps_rpc_eng_ioctl */
extern "C" __attribute__((visibility("default"))) int gps_rpc_eng_ioctl(void) {
    ALOGD("gps_rpc_eng_ioctl() called");
    return 0;
}

/* Demangled: send_request */
extern "C" __attribute__((visibility("default"))) int send_request(void) {
    ALOGD("send_request() called");
    return 0;
}

/* Demangled: xdr_GpsPrivacySettingRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsPrivacySettingRpcT(void) {
    ALOGD("xdr_GpsPrivacySettingRpcT() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: gps_provide_refloc_data */
extern "C" __attribute__((visibility("default"))) int gps_provide_refloc_data(void) {
    ALOGD("gps_provide_refloc_data() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_event_mask_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_event_mask_t(void) {
    ALOGD("xdr_gps_rpc_event_mask_t() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_server_req_data_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_server_req_data_t(void) {
    ALOGD("xdr_gps_rpc_server_req_data_t() called");
    return 0;
}

/* Demangled: gps_request_assist_data */
extern "C" __attribute__((visibility("default"))) int gps_request_assist_data(void) {
    ALOGD("gps_request_assist_data() called");
    return 0;
}

/* Demangled: gps_request_set_pde_server */
extern "C" __attribute__((visibility("default"))) int gps_request_set_pde_server(void) {
    ALOGD("gps_request_set_pde_server() called");
    return 0;
}

/* Demangled: gps_request_socket_close_rsp */
extern "C" __attribute__((visibility("default"))) int gps_request_socket_close_rsp(void) {
    ALOGD("gps_request_socket_close_rsp() called");
    return 0;
}

/* Demangled: gps_request_stop */
extern "C" __attribute__((visibility("default"))) int gps_request_stop(void) {
    ALOGD("gps_request_stop() called");
    return 0;
}

/* Demangled: gps_rpc_close_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_close_0x00000001(void) {
    ALOGD("gps_rpc_close_0x00000001() called");
    return 0;
}

/* Demangled: gps_rpc_version_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_version_0x00000001(void) {
    ALOGD("gps_rpc_version_0x00000001() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_ioctl_data_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_ioctl_data_t(void) {
    ALOGD("xdr_gps_rpc_ioctl_data_t() called");
    return 0;
}

/* Demangled: xdr_AppConnStatusT */
extern "C" __attribute__((visibility("default"))) int xdr_AppConnStatusT(void) {
    ALOGD("xdr_AppConnStatusT() called");
    return 0;
}

/* Demangled: xdr_GpsRatModeSettingMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsRatModeSettingMsgT(void) {
    ALOGD("xdr_GpsRatModeSettingMsgT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_server_conn_handle_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_server_conn_handle_t(void) {
    ALOGD("xdr_gps_rpc_server_conn_handle_t() called");
    return 0;
}

/* Demangled: xdr_rpc_resp_type */
extern "C" __attribute__((visibility("default"))) int xdr_rpc_resp_type(void) {
    ALOGD("xdr_rpc_resp_type() called");
    return 0;
}

/* Demangled: rpc_get_version */
extern "C" __attribute__((visibility("default"))) int rpc_get_version(void) {
    ALOGD("rpc_get_version() called");
    return 0;
}

/* Demangled: xdr_GpsAADataT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsAADataT(void) {
    ALOGD("xdr_GpsAADataT() called");
    return 0;
}

/* Demangled: xdr_rpc_notify_info_struct */
extern "C" __attribute__((visibility("default"))) int xdr_rpc_notify_info_struct(void) {
    ALOGD("xdr_rpc_notify_info_struct() called");
    return 0;
}

/* Demangled: eventQ_init */
extern "C" __attribute__((visibility("default"))) int eventQ_init(void) {
    ALOGD("eventQ_init() called");
    return 0;
}

/* Demangled: eventQ_read */
extern "C" __attribute__((visibility("default"))) int eventQ_read(void) {
    ALOGD("eventQ_read() called");
    return 0;
}

/* Demangled: gps_request_cell_info */
extern "C" __attribute__((visibility("default"))) int gps_request_cell_info(void) {
    ALOGD("gps_request_cell_info() called");
    return 0;
}

/* Demangled: gps_request_send_fake_poweron_ack */
extern "C" __attribute__((visibility("default"))) int gps_request_send_fake_poweron_ack(void) {
    ALOGD("gps_request_send_fake_poweron_ack() called");
    return 0;
}

/* Demangled: gps_rpc_dev_ioctl */
extern "C" __attribute__((visibility("default"))) int gps_rpc_dev_ioctl(void) {
    ALOGD("gps_rpc_dev_ioctl() called");
    return 0;
}

/* Exported Object: gps_rpc_eng_data */
extern "C" __attribute__((visibility("default"))) void* gps_rpc_eng_data = NULL;

/* Demangled: gps_rpc_eng_ioctl_wait_cb */
extern "C" __attribute__((visibility("default"))) int gps_rpc_eng_ioctl_wait_cb(void) {
    ALOGD("gps_rpc_eng_ioctl_wait_cb() called");
    return 0;
}

/* Demangled: gps_rpc_stop_fix_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_stop_fix_0x00000001(void) {
    ALOGD("gps_rpc_stop_fix_0x00000001() called");
    return 0;
}

/* Demangled: xdr_GpsSuplHRPDInformationT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSuplHRPDInformationT(void) {
    ALOGD("xdr_GpsSuplHRPDInformationT() called");
    return 0;
}

/* Demangled: xdr_server_close_status_t */
extern "C" __attribute__((visibility("default"))) int xdr_server_close_status_t(void) {
    ALOGD("xdr_server_close_status_t() called");
    return 0;
}

/* Demangled: gps_request_period_sync */
extern "C" __attribute__((visibility("default"))) int gps_request_period_sync(void) {
    ALOGD("gps_request_period_sync() called");
    return 0;
}

/* Demangled: gps_request_tcp_data_send_rsp */
extern "C" __attribute__((visibility("default"))) int gps_request_tcp_data_send_rsp(void) {
    ALOGD("gps_request_tcp_data_send_rsp() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_ioctl_rets */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_ioctl_rets(void) {
    ALOGD("xdr_gps_rpc_ioctl_rets() called");
    return 0;
}

/* Demangled: xdr_GpsEphPrnDataT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsEphPrnDataT(void) {
    ALOGD("xdr_GpsEphPrnDataT() called");
    return 0;
}

/* Demangled: xdr_GpsTcpbRecvRspMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsTcpbRecvRspMsgT(void) {
    ALOGD("xdr_GpsTcpbRecvRspMsgT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_server_open_status_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_server_open_status_t(void) {
    ALOGD("xdr_gps_rpc_server_open_status_t() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: gps_request_send_aa_req */
extern "C" __attribute__((visibility("default"))) int gps_request_send_aa_req(void) {
    ALOGD("gps_request_send_aa_req() called");
    return 0;
}

/* Demangled: set_customer */
extern "C" __attribute__((visibility("default"))) int set_customer(void) {
    ALOGD("set_customer() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_close_rets */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_close_rets(void) {
    ALOGD("xdr_gps_rpc_close_rets() called");
    return 0;
}

/* Demangled: xdr_GpsEmergencyCallRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsEmergencyCallRpcT(void) {
    ALOGD("xdr_GpsEmergencyCallRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsSuplCellInformationRspMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSuplCellInformationRspMsgT(void) {
    ALOGD("xdr_GpsSuplCellInformationRspMsgT() called");
    return 0;
}

/* Demangled: gps_set_low_power_mode */
extern "C" __attribute__((visibility("default"))) int gps_set_low_power_mode(void) {
    ALOGD("gps_set_low_power_mode() called");
    return 0;
}

/* Demangled: xdr_GpsMpcIs801ModeRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsMpcIs801ModeRpcT(void) {
    ALOGD("xdr_GpsMpcIs801ModeRpcT() called");
    return 0;
}

/* Demangled: gps_set_position_mode */
extern "C" __attribute__((visibility("default"))) int gps_set_position_mode(void) {
    ALOGD("gps_set_position_mode() called");
    return 0;
}

/* Demangled: process_alm_report */
extern "C" __attribute__((visibility("default"))) int process_alm_report(void) {
    ALOGD("process_alm_report() called");
    return 0;
}

/* Exported Object: response_eph_mutex */
extern "C" __attribute__((visibility("default"))) void* response_eph_mutex = NULL;

/* Demangled: xdr_GpsAfltMeasurementMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsAfltMeasurementMsgT(void) {
    ALOGD("xdr_GpsAfltMeasurementMsgT() called");
    return 0;
}

/* Demangled: xdr_GpsRefLocRespRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsRefLocRespRpcT(void) {
    ALOGD("xdr_GpsRefLocRespRpcT() called");
    return 0;
}

/* Demangled: gps_request_freq_aiding */
extern "C" __attribute__((visibility("default"))) int gps_request_freq_aiding(void) {
    ALOGD("gps_request_freq_aiding() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: gps_rpc_dev_close */
extern "C" __attribute__((visibility("default"))) int gps_rpc_dev_close(void) {
    ALOGD("gps_rpc_dev_close() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_ioctl_cmd_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_ioctl_cmd_t(void) {
    ALOGD("xdr_gps_rpc_ioctl_cmd_t() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_cb_args */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_cb_args(void) {
    ALOGD("xdr_gps_rpc_cb_args() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_engine_state_e_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_engine_state_e_t(void) {
    ALOGD("xdr_gps_rpc_engine_state_e_t() called");
    return 0;
}

/* Demangled: gps_request_ni_pos_resp */
extern "C" __attribute__((visibility("default"))) int gps_request_ni_pos_resp(void) {
    ALOGD("gps_request_ni_pos_resp() called");
    return 0;
}

/* Demangled: xdr_GpsEventRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsEventRpcT(void) {
    ALOGD("xdr_GpsEventRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsFreqAidReqRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsFreqAidReqRpcT(void) {
    ALOGD("xdr_GpsFreqAidReqRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsMpcPostionTechRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsMpcPostionTechRpcT(void) {
    ALOGD("xdr_GpsMpcPostionTechRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsTcpbDataSendRspMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsTcpbDataSendRspMsgT(void) {
    ALOGD("xdr_GpsTcpbDataSendRspMsgT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_report_status_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_report_status_t(void) {
    ALOGD("xdr_gps_rpc_report_status_t() called");
    return 0;
}

/* Demangled: gps_rpc_open_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_open_0x00000001(void) {
    ALOGD("gps_rpc_open_0x00000001() called");
    return 0;
}

/* Demangled: xdr_GpsAlmPrnDataT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsAlmPrnDataT(void) {
    ALOGD("xdr_GpsAlmPrnDataT() called");
    return 0;
}

/* Demangled: gps_request_power_on */
extern "C" __attribute__((visibility("default"))) int gps_request_power_on(void) {
    ALOGD("gps_request_power_on() called");
    return 0;
}

/* Demangled: process_eph_report */
extern "C" __attribute__((visibility("default"))) int process_eph_report(void) {
    ALOGD("process_eph_report() called");
    return 0;
}

/* Demangled: gps_rpc_event_cb_func_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_event_cb_func_0x00000001(void) {
    ALOGD("gps_rpc_event_cb_func_0x00000001() called");
    return 0;
}

/* Demangled: xdr_GpsNIPositionRequestCmdT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsNIPositionRequestCmdT(void) {
    ALOGD("xdr_GpsNIPositionRequestCmdT() called");
    return 0;
}

/* Demangled: xdr_GpsRpcSelectionTypeT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsRpcSelectionTypeT(void) {
    ALOGD("xdr_GpsRpcSelectionTypeT() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: xdr_GpsTcpbDataRecvMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsTcpbDataRecvMsgT(void) {
    ALOGD("xdr_GpsTcpbDataRecvMsgT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_report_reqserver_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_report_reqserver_t(void) {
    ALOGD("xdr_gps_rpc_report_reqserver_t() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_version_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_version_t(void) {
    ALOGD("xdr_gps_rpc_version_t() called");
    return 0;
}

/* Demangled: xdr_rpc_boolean */
extern "C" __attribute__((visibility("default"))) int xdr_rpc_boolean(void) {
    ALOGD("xdr_rpc_boolean() called");
    return 0;
}

/* Demangled: gps_eng_report_nmea */
extern "C" __attribute__((visibility("default"))) int gps_eng_report_nmea(void) {
    ALOGD("gps_eng_report_nmea() called");
    return 0;
}

/* Demangled: viarpc_init */
extern "C" __attribute__((visibility("default"))) int viarpc_init(void) {
    ALOGD("viarpc_init() called");
    return 0;
}

/* Demangled: xdr_GpsAlmPrnRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsAlmPrnRpcT(void) {
    ALOGD("xdr_GpsAlmPrnRpcT() called");
    return 0;
}

/* Demangled: xdr_ServiceType */
extern "C" __attribute__((visibility("default"))) int xdr_ServiceType(void) {
    ALOGD("xdr_ServiceType() called");
    return 0;
}

/* Demangled: eventQ_clear */
extern "C" __attribute__((visibility("default"))) int eventQ_clear(void) {
    ALOGD("eventQ_clear() called");
    return 0;
}

/* Demangled: gps_request_stop_fix */
extern "C" __attribute__((visibility("default"))) int gps_request_stop_fix(void) {
    ALOGD("gps_request_stop_fix() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_stop_fix_rets */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_stop_fix_rets(void) {
    ALOGD("xdr_gps_rpc_stop_fix_rets() called");
    return 0;
}

/* Demangled: gps_rpc_null_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_null_0x00000001(void) {
    ALOGD("gps_rpc_null_0x00000001() called");
    return 0;
}

/* Demangled: gps_request_del_aiding_ack */
extern "C" __attribute__((visibility("default"))) int gps_request_del_aiding_ack(void) {
    ALOGD("gps_request_del_aiding_ack() called");
    return 0;
}

/* Exported Object: gps_rpc_api_clnt */
extern "C" __attribute__((visibility("default"))) void* gps_rpc_api_clnt = NULL;

/* Exported Object: response_process_mutex */
extern "C" __attribute__((visibility("default"))) void* response_process_mutex = NULL;

/* Demangled: xdr_gps_rpc_open_rets */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_open_rets(void) {
    ALOGD("xdr_gps_rpc_open_rets() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_start_fix_rets */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_start_fix_rets(void) {
    ALOGD("xdr_gps_rpc_start_fix_rets() called");
    return 0;
}

/* Demangled: xdr_GpsNIPositionRequestIndT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsNIPositionRequestIndT(void) {
    ALOGD("xdr_GpsNIPositionRequestIndT() called");
    return 0;
}

/* Demangled: gps_request_tcp_data_recv */
extern "C" __attribute__((visibility("default"))) int gps_request_tcp_data_recv(void) {
    ALOGD("gps_request_tcp_data_recv() called");
    return 0;
}

/* Demangled: gps_rpc_apicbprog_freeresult */
extern "C" __attribute__((visibility("default"))) int gps_rpc_apicbprog_freeresult(void) {
    ALOGD("gps_rpc_apicbprog_freeresult() called");
    return 0;
}

/* Exported Object: gps_rpc_svr_port */
extern "C" __attribute__((visibility("default"))) void* gps_rpc_svr_port = NULL;

/* Demangled: gps_set_privacy_mode */
extern "C" __attribute__((visibility("default"))) int gps_set_privacy_mode(void) {
    ALOGD("gps_set_privacy_mode() called");
    return 0;
}

/* Demangled: xdr_GpsAassistReqRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsAassistReqRpcT(void) {
    ALOGD("xdr_GpsAassistReqRpcT() called");
    return 0;
}

/* Demangled: gps_request_socket_create_rsp */
extern "C" __attribute__((visibility("default"))) int gps_request_socket_create_rsp(void) {
    ALOGD("gps_request_socket_create_rsp() called");
    return 0;
}

/* Demangled: gps_rpc_start_fix_0x00000001 */
extern "C" __attribute__((visibility("default"))) int gps_rpc_start_fix_0x00000001(void) {
    ALOGD("gps_rpc_start_fix_0x00000001() called");
    return 0;
}

/* Demangled: xdr_GpsEphPrnRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsEphPrnRpcT(void) {
    ALOGD("xdr_GpsEphPrnRpcT() called");
    return 0;
}

/* Demangled: xdr_GpsMpcNotifyRpcT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsMpcNotifyRpcT(void) {
    ALOGD("xdr_GpsMpcNotifyRpcT() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_fix_session_state_t */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_fix_session_state_t(void) {
    ALOGD("xdr_gps_rpc_fix_session_state_t() called");
    return 0;
}

/* Demangled: xdr_GpsSocketStatusT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsSocketStatusT(void) {
    ALOGD("xdr_GpsSocketStatusT() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_ioctl_args */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_ioctl_args(void) {
    ALOGD("xdr_gps_rpc_ioctl_args() called");
    return 0;
}

/* Demangled: xdr_GpsRpcFixTypeT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsRpcFixTypeT(void) {
    ALOGD("xdr_GpsRpcFixTypeT() called");
    return 0;
}

/* Demangled: xdr_GpsWriteServerConfigReqT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsWriteServerConfigReqT(void) {
    ALOGD("xdr_GpsWriteServerConfigReqT() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: gps_request_send_stop_ack */
extern "C" __attribute__((visibility("default"))) int gps_request_send_stop_ack(void) {
    ALOGD("gps_request_send_stop_ack() called");
    return 0;
}

/* Demangled: xdr_gps_rpc_close_args */
extern "C" __attribute__((visibility("default"))) int xdr_gps_rpc_close_args(void) {
    ALOGD("xdr_gps_rpc_close_args() called");
    return 0;
}

/* Demangled: xdr_GpsRpcFixQualityT */
extern "C" __attribute__((visibility("default"))) int xdr_GpsRpcFixQualityT(void) {
    ALOGD("xdr_GpsRpcFixQualityT() called");
    return 0;
}

/* Demangled: xdr_PeriodSyncMsgT */
extern "C" __attribute__((visibility("default"))) int xdr_PeriodSyncMsgT(void) {
    ALOGD("xdr_PeriodSyncMsgT() called");
    return 0;
}
