/*
 * Reverse-Engineered Source for: volte_imcb
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "volte_imcb"

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
#include "volte_imcb.h"


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
#define DEV_DEV_CCCI3_TTY1 "/dev/ccci3_tty1"
#define DEV_DEV_CCCI3_TTY2 "/dev/ccci3_tty2"
#define DEV_DEV_CCCI_AUD "/dev/ccci_aud"
#define DEV_DEV_CCCI_CCB_DHL "/dev/ccci_ccb_dhl"
#define DEV_DEV_CCCI_FS "/dev/ccci_fs"
#define DEV_DEV_CCCI_IMSA "/dev/ccci_imsa"
#define DEV_DEV_CCCI_IMSC "/dev/ccci_imsc"
#define DEV_DEV_CCCI_IMSDC "/dev/ccci_imsdc"
#define DEV_DEV_CCCI_IMSEM "/dev/ccci_imsem"
#define DEV_DEV_CCCI_IMSV "/dev/ccci_imsv"
#define DEV_DEV_CCCI_IOCTL0 "/dev/ccci_ioctl0"
#define DEV_DEV_CCCI_IOCTL1 "/dev/ccci_ioctl1"
#define DEV_DEV_CCCI_IOCTL2 "/dev/ccci_ioctl2"
#define DEV_DEV_CCCI_IOCTL3 "/dev/ccci_ioctl3"
#define DEV_DEV_CCCI_IOCTL4 "/dev/ccci_ioctl4"
#define DEV_DEV_CCCI_IPC_1220_0 "/dev/ccci_ipc_1220_0"
#define DEV_DEV_CCCI_IPC_2 "/dev/ccci_ipc_2"
#define DEV_DEV_CCCI_IPC_4 "/dev/ccci_ipc_4"
#define DEV_DEV_CCCI_MD_LOG_CTRL "/dev/ccci_md_log_ctrl"
#define DEV_DEV_CCCI_MD_LOG_RX "/dev/ccci_md_log_rx"
#define DEV_DEV_CCCI_MD_LOG_TX "/dev/ccci_md_log_tx"
#define DEV_DEV_CCCI_MDL_MONITOR "/dev/ccci_mdl_monitor"
#define DEV_DEV_CCCI_MONITOR "/dev/ccci_monitor"
#define DEV_DEV_CCCI_PCM_RX "/dev/ccci_pcm_rx"
#define DEV_DEV_CCCI_PCM_TX "/dev/ccci_pcm_tx"
#define DEV_DEV_CCCI_RAW_DHL "/dev/ccci_raw_dhl"
#define DEV_DEV_CCCI_RAW_NETD "/dev/ccci_raw_netd"
#define DEV_DEV_CCCI_RAW_USB "/dev/ccci_raw_usb"
#define DEV_DEV_CCCI_RPC "/dev/ccci_rpc"
#define DEV_DEV_CCCI_UEM_RX "/dev/ccci_uem_rx"
#define DEV_DEV_CCCI_UEM_TX "/dev/ccci_uem_tx"
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
#define DEV_DEV_RADIO_PTTY "/dev/radio/ptty"
#define DEV_DEV_RADIO_PTTYIMS "/dev/radio/pttyims"
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
    if (access(DEV_DEV_CCCI_CCB_DHL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_CCB_DHL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_CCB_DHL, g_dev_fd);
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
    if (access(DEV_DEV_CCCI_RAW_DHL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_RAW_DHL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_RAW_DHL, g_dev_fd);
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
    if (access(DEV_DEV_RADIO_PTTY, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RADIO_PTTY, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RADIO_PTTY, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_RADIO_PTTYIMS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RADIO_PTTYIMS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RADIO_PTTYIMS, g_dev_fd);
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
    ALOGI("Received signal %d, terminating volte_imcb", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting volte_imcb service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("volte_imcb service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: __modsi3 */
extern "C" __attribute__((visibility("default"))) int __modsi3(void) {
    ALOGD("__modsi3() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __umodsi3 */
extern "C" __attribute__((visibility("default"))) int __umodsi3(void) {
    ALOGD("__umodsi3() called");
    return 0;
}

/* Demangled: __aeabi_idiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv(void) {
    ALOGD("__aeabi_idiv() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: __divsi3 */
extern "C" __attribute__((visibility("default"))) int __divsi3(void) {
    ALOGD("__divsi3() called");
    return 0;
}

/* Demangled: __aeabi_idivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_idivmod(void) {
    ALOGD("__aeabi_idivmod() called");
    return 0;
}

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_VFP_D */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_VFP_D(void) {
    ALOGD("__gnu_Unwind_Restore_VFP_D() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_VFP */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_VFP(void) {
    ALOGD("__gnu_Unwind_Restore_VFP() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_VFP_D_16_to_31 */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_VFP_D_16_to_31(void) {
    ALOGD("__gnu_Unwind_Restore_VFP_D_16_to_31() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_WMMXD */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_WMMXD(void) {
    ALOGD("__gnu_Unwind_Restore_WMMXD() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Restore_WMMXC */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Restore_WMMXC(void) {
    ALOGD("__gnu_Unwind_Restore_WMMXC() called");
    return 0;
}

/* Demangled: restore_core_regs */
extern "C" __attribute__((visibility("default"))) int restore_core_regs(void) {
    ALOGD("restore_core_regs() called");
    return 0;
}

/* Demangled: _Unwind_GetCFA */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetCFA(void) {
    ALOGD("_Unwind_GetCFA() called");
    return 0;
}

/* Demangled: __gnu_Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_RaiseException(void) {
    ALOGD("__gnu_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: __gnu_Unwind_ForcedUnwind */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_ForcedUnwind(void) {
    ALOGD("__gnu_Unwind_ForcedUnwind() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Resume(void) {
    ALOGD("__gnu_Unwind_Resume() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Resume_or_Rethrow */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Resume_or_Rethrow(void) {
    ALOGD("__gnu_Unwind_Resume_or_Rethrow() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Backtrace */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Backtrace(void) {
    ALOGD("__gnu_Unwind_Backtrace() called");
    return 0;
}

/* Demangled: __gnu_unwind_execute */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_execute(void) {
    ALOGD("__gnu_unwind_execute() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_VFP_D */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_VFP_D(void) {
    ALOGD("__gnu_Unwind_Save_VFP_D() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_VFP */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_VFP(void) {
    ALOGD("__gnu_Unwind_Save_VFP() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_VFP_D_16_to_31 */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_VFP_D_16_to_31(void) {
    ALOGD("__gnu_Unwind_Save_VFP_D_16_to_31() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_WMMXD */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_WMMXD(void) {
    ALOGD("__gnu_Unwind_Save_WMMXD() called");
    return 0;
}

/* Demangled: __gnu_Unwind_Save_WMMXC */
extern "C" __attribute__((visibility("default"))) int __gnu_Unwind_Save_WMMXC(void) {
    ALOGD("__gnu_Unwind_Save_WMMXC() called");
    return 0;
}

/* Demangled: __restore_core_regs */
extern "C" __attribute__((visibility("default"))) int __restore_core_regs(void) {
    ALOGD("__restore_core_regs() called");
    return 0;
}

/* Demangled: ___Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int ___Unwind_RaiseException(void) {
    ALOGD("___Unwind_RaiseException() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: ___Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int ___Unwind_Resume(void) {
    ALOGD("___Unwind_Resume() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: ___Unwind_Resume_or_Rethrow */
extern "C" __attribute__((visibility("default"))) int ___Unwind_Resume_or_Rethrow(void) {
    ALOGD("___Unwind_Resume_or_Rethrow() called");
    return 0;
}

/* Demangled: _Unwind_Resume_or_Rethrow */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume_or_Rethrow(void) {
    ALOGD("_Unwind_Resume_or_Rethrow() called");
    return 0;
}

/* Demangled: ___Unwind_ForcedUnwind */
extern "C" __attribute__((visibility("default"))) int ___Unwind_ForcedUnwind(void) {
    ALOGD("___Unwind_ForcedUnwind() called");
    return 0;
}

/* Demangled: _Unwind_ForcedUnwind */
extern "C" __attribute__((visibility("default"))) int _Unwind_ForcedUnwind(void) {
    ALOGD("_Unwind_ForcedUnwind() called");
    return 0;
}

/* Demangled: ___Unwind_Backtrace */
extern "C" __attribute__((visibility("default"))) int ___Unwind_Backtrace(void) {
    ALOGD("___Unwind_Backtrace() called");
    return 0;
}

/* Demangled: _Unwind_Backtrace */
extern "C" __attribute__((visibility("default"))) int _Unwind_Backtrace(void) {
    ALOGD("_Unwind_Backtrace() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: _Unwind_GetDataRelBase */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetDataRelBase(void) {
    ALOGD("_Unwind_GetDataRelBase() called");
    return 0;
}

/* Demangled: _Unwind_GetTextRelBase */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetTextRelBase(void) {
    ALOGD("_Unwind_GetTextRelBase() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
