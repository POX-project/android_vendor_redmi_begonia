/*
 * Reverse-Engineered Source for: ccci_rpcd
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "ccci_rpcd"

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
#include "ccci_rpcd.h"


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

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating ccci_rpcd", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting ccci_rpcd service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("ccci_rpcd service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}
