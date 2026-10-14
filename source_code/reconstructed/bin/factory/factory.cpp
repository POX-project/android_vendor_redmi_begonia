/*
 * Reverse-Engineered Source for: factory
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "factory"

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
#include "factory.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_MT_PMIC_ADC_CALI "/dev/MT_pmic_adc_cali"
#define DEV_DEV_ACCDET "/dev/accdet"
#define DEV_DEV_ALS_PS "/dev/als_ps"
#define DEV_DEV_BLOCK "/dev/block"
#define DEV_DEV_BLOCK "/dev/block/"
#define DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME "/dev/block/bootdevice/by-name"
#define DEV_DEV_BLOCK_BY_NAME "/dev/block/by-name"
#define DEV_DEV_BLOCK_BY_NAME_PROINFO "/dev/block/by-name/proinfo"
#define DEV_DEV_BLOCK_MMCBLK0 "/dev/block/mmcblk0"
#define DEV_DEV_BLOCK_MMCBLK1 "/dev/block/mmcblk1"
#define DEV_DEV_BLOCK_SDC "/dev/block/sdc"
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
#define DEV_DEV_FLASHLIGHT "/dev/flashlight"
#define DEV_DEV_FM "/dev/fm"
#define DEV_DEV_GRAPHICS_FB0 "/dev/graphics/fb0"
#define DEV_DEV_GSENSOR "/dev/gsensor"
#define DEV_DEV_GYROSCOPE "/dev/gyroscope"
#define DEV_DEV_INPUT_EVENT "/dev/input/event"
#define DEV_DEV_IRTX "/dev/irtx"
#define DEV_DEV_KD_CAMERA_FLASHLIGHT "/dev/kd_camera_flashlight"
#define DEV_DEV_KMSG "/dev/kmsg"
#define DEV_DEV_MSENSOR "/dev/msensor"
#define DEV_DEV_MTK_KPD "/dev/mtk-kpd"
#define DEV_DEV_PMIC_FTM "/dev/pmic_ftm"
#define DEV_DEV_STPFGD "/dev/stpfgd"
#define DEV_DEV_STPGPS "/dev/stpgps"
#define DEV_DEV_TTYC0 "/dev/ttyC0"
#define DEV_DEV_TTYC1 "/dev/ttyC1"
#define DEV_DEV_TTYC2 "/dev/ttyC2"
#define DEV_DEV_TTYC3 "/dev/ttyC3"
#define DEV_DEV_TTYGS "/dev/ttyGS"
#define DEV_DEV_TTYMT "/dev/ttyMT"
#define DEV_DEV_TTYS "/dev/ttyS"
#define DEV_DEV_WMTWIFI "/dev/wmtWifi"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_MT_PMIC_ADC_CALI, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MT_PMIC_ADC_CALI, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MT_PMIC_ADC_CALI, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_ACCDET, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ACCDET, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ACCDET, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_ALS_PS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ALS_PS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ALS_PS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_BY_NAME, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_BY_NAME_PROINFO, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME_PROINFO, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME_PROINFO, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_MMCBLK0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_MMCBLK0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_MMCBLK0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_MMCBLK1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_MMCBLK1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_MMCBLK1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_SDC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_SDC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_SDC, g_dev_fd);
            return g_dev_fd;
        }
    }
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
    if (access(DEV_DEV_FLASHLIGHT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_FLASHLIGHT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_FLASHLIGHT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_FM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_FM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_FM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_GRAPHICS_FB0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GRAPHICS_FB0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GRAPHICS_FB0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_GSENSOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GSENSOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GSENSOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_GYROSCOPE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GYROSCOPE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GYROSCOPE, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_INPUT_EVENT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_INPUT_EVENT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_INPUT_EVENT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_IRTX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_IRTX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_IRTX, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_KD_CAMERA_FLASHLIGHT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_KD_CAMERA_FLASHLIGHT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_KD_CAMERA_FLASHLIGHT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_KMSG, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_KMSG, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_KMSG, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MSENSOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MSENSOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MSENSOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MTK_KPD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MTK_KPD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MTK_KPD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_PMIC_FTM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_PMIC_FTM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_PMIC_FTM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_STPFGD, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STPFGD, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STPFGD, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_STPGPS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STPGPS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STPGPS, g_dev_fd);
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
    if (access(DEV_DEV_TTYGS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYGS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYGS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYMT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYMT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYMT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_WMTWIFI, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_WMTWIFI, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_WMTWIFI, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating factory", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting factory service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("factory service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: void std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >::__push_back_slow_path<audio_source_t const&>(audio_source_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: android::AudioParameter::keyDeviceConnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter16keyDeviceConnectE = NULL;

/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void) {
    ALOGD("_ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc() called");
    return 0;
}

/* Demangled: android::AudioParameter::getAt(unsigned long, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter5getAtEmRNS_7String8E(void) {
    ALOGD("_ZNK7android14AudioParameter5getAtEmRNS_7String8E() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::toString(audio_stream_type_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::StderrLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void) {
    ALOGD("_ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::AudioParameter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14AudioParameterE = NULL;

/* Exported Object: android::AudioParameter::keyBtNrec */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter9keyBtNrecE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::toString(audio_input_flags_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::toString(audio_usage_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::toString(audio_output_flags_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::ChannelIndexTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE6mTableE = NULL;

/* Exported Object: android::TypeConverter<android::InputChannelTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_18InputChannelTraitsEE6mTableE = NULL;

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: get_android_dt_dir() */
extern "C" __attribute__((visibility("default"))) int _Z18get_android_dt_dirv(void) {
    ALOGD("_Z18get_android_dt_dirv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Demangled: android::fs_mgr::ReadDefaultFstab(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::valueOff */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter8valueOffE = NULL;

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_format_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE6mTableE = NULL;

/* Demangled: android::base::CachedProperty::CachedProperty(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14CachedPropertyC2EPKc(void) {
    ALOGD("_ZN7android4base14CachedPropertyC2EPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: fs_mgr_update_for_slotselect(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE(void) {
    ALOGD("_Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: TemporaryFile::release() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFile7releaseEv(void) {
    ALOGD("_ZN13TemporaryFile7releaseEv() called");
    return 0;
}

/* Demangled: android::base::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageD2Ev(void) {
    ALOGD("_ZN7android4base10LogMessageD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE = NULL;

/* Exported Object: iFilePRODUCT_INFOLID */
extern "C" __attribute__((visibility("default"))) void* iFilePRODUCT_INFOLID = NULL;

/* Exported Object: android::AudioParameter::keyStreamSupportedFormats */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter25keyStreamSupportedFormatsE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE20collectionFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERNS4_6vectorIjNS8_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE20collectionFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERNS4_6vectorIjNS8_IjEEEEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_stream_type_t, std::__1::allocator<audio_stream_type_t> >::__push_back_slow_path<audio_stream_type_t const&>(audio_stream_type_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19audio_stream_type_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI19audio_stream_type_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyReconfigA2dp */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter15keyReconfigA2dpE = NULL;

/* Demangled: android::AudioParameter::add(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter3addERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android14AudioParameter3addERKNS_7String8ES3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const (&) [1]>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, char const (&) [1]) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_() called");
    return 0;
}

/* Demangled: TemporaryDir::~TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirD2Ev(void) {
    ALOGD("_ZN12TemporaryDirD2Ev() called");
    return 0;
}

/* Demangled: android::base::EndsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::AudioParameter::remove(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter6removeERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameter6removeERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::AudioParameter::~AudioParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterD0Ev(void) {
    ALOGD("_ZN7android14AudioParameterD0Ev() called");
    return 0;
}

/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i() called");
    return 0;
}

/* Demangled: android::base::StringAppendF(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz(void) {
    ALOGD("_ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::OutputChannelTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_19OutputChannelTraitsEE6mTableE = NULL;

/* Demangled: property_get_int32 */
extern "C" __attribute__((visibility("default"))) int property_get_int32(void) {
    ALOGD("property_get_int32() called");
    return 0;
}

/* Demangled: android::fs_mgr::GetVerityDeviceName(android::fs_mgr::FstabEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE(void) {
    ALOGD("_ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE() called");
    return 0;
}

/* Demangled: fs_mgr_get_boot_config_from_kernel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_(void) {
    ALOGD("_Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_() called");
    return 0;
}

/* Demangled: signed char android::base::GetIntProperty<signed char>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, signed char, signed char, signed char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14GetIntPropertyIaEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void) {
    ALOGD("_ZN7android4base14GetIntPropertyIaEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_() called");
    return 0;
}

/* Demangled: property_get */
extern "C" __attribute__((visibility("default"))) int property_get(void) {
    ALOGD("property_get() called");
    return 0;
}

/* Demangled: android::channelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::base::LogdLogger::operator()(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_(void) {
    ALOGD("_ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: android::AudioParameter::addInt(android::String8 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter6addIntERKNS_7String8Ei(void) {
    ALOGD("_ZN7android14AudioParameter6addIntERKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_usage_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::deviceFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: bool android::base::ParseUint<unsigned long>(char const*, unsigned long*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ParseUintImEEbPKcPT_S4_b(void) {
    ALOGD("_ZN7android4base9ParseUintImEEbPKcPT_S4_b() called");
    return 0;
}

/* Demangled: android::base::SetAborter(std::__1::function<void (char const*)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE(void) {
    ALOGD("_ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_source_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: fs_mgr_get_other_slot_suffix() */
extern "C" __attribute__((visibility("default"))) int _Z28fs_mgr_get_other_slot_suffixv(void) {
    ALOGD("_Z28fs_mgr_get_other_slot_suffixv() called");
    return 0;
}

/* Demangled: android::base::GetLibLogFunctions() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base18GetLibLogFunctionsEv(void) {
    ALOGD("_ZN7android4base18GetLibLogFunctionsEv() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::OutputDeviceTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE6mTableE = NULL;

/* Demangled: android::base::Readlink(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void) {
    ALOGD("_ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_() called");
    return 0;
}

/* Demangled: android::fs_mgr::GetBootDevices() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr14GetBootDevicesEv(void) {
    ALOGD("_ZN7android6fs_mgr14GetBootDevicesEv() called");
    return 0;
}

/* Demangled: fs_mgr_get_boot_config_from_kernel_cmdline(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void) {
    ALOGD("_Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_() called");
    return 0;
}

/* Demangled: android::base::GetThreadId() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11GetThreadIdEv(void) {
    ALOGD("_ZN7android4base11GetThreadIdEv() called");
    return 0;
}

/* Demangled: android::base::LogMessage::stream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessage6streamEv(void) {
    ALOGD("_ZN7android4base10LogMessage6streamEv() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_mode_t, std::__1::allocator<audio_mode_t> >::__push_back_slow_path<audio_mode_t const&>(audio_mode_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12audio_mode_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI12audio_mode_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: bool android::base::ParseInt<int>(char const*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_(void) {
    ALOGD("_ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry*, std::__1::allocator<android::fs_mgr::FstabEntry*> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry*>(android::fs_mgr::FstabEntry*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_source_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE6mTableE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char const*>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_() called");
    return 0;
}

/* Demangled: android::inputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyHwAvSync */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter11keyHwAvSyncE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_mode_t, std::__1::allocator<audio_mode_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: TemporaryFile::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: stWifiCfgDefault */
extern "C" __attribute__((visibility("default"))) void* stWifiCfgDefault = NULL;

/* Demangled: android::base::ShouldLog(android::base::LogSeverity, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(void) {
    ALOGD("_ZN7android4base9ShouldLogENS0_11LogSeverityEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry&>(android::fs_mgr::FstabEntry&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::base::KernelLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void) {
    ALOGD("_ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_() called");
    return 0;
}

/* Exported Object: guard variable for aidl::android::hardware::light::ILights::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl7android8hardware5light7ILights4hashE = NULL;

/* Exported Object: android::AudioParameter::keyMonoOutput */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter13keyMonoOutputE = NULL;

/* Exported Object: android::AudioParameter::keyScreenState */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter14keyScreenStateE = NULL;

/* Demangled: android::AudioParameter::getInt(android::String8 const&, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter6getIntERKNS_7String8ERi(void) {
    ALOGD("_ZNK7android14AudioParameter6getIntERKNS_7String8ERi() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityD1Ev(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::fs_mgr::ReadFstabFromFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE() called");
    return 0;
}

/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_jjjb(void) {
    ALOGD("_ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_jjjb() called");
    return 0;
}

/* Demangled: android::base::StringReplace(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b(void) {
    ALOGD("_ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE6mTableE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: android::base::StdioLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void) {
    ALOGD("_ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_() called");
    return 0;
}

/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_mode_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: property_list */
extern "C" __attribute__((visibility("default"))) int property_list(void) {
    ALOGD("property_list() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyProgramId */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter12keyProgramIdE = NULL;

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >::__push_back_slow_path<audio_format_t const&>(audio_format_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::formatFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t(void) {
    ALOGD("_ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t() called");
    return 0;
}

/* Demangled: android::base::SetDefaultTag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: property_get_int64 */
extern "C" __attribute__((visibility("default"))) int property_get_int64(void) {
    ALOGD("property_get_int64() called");
    return 0;
}

/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: android::fs_mgr::TransformFstabForDsu(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE() called");
    return 0;
}

/* Demangled: fs_mgr_parse_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyStreamSupportedSamplingRates */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter31keyStreamSupportedSamplingRatesE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: TemporaryFile::TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC1Ev(void) {
    ALOGD("_ZN13TemporaryFileC1Ev() called");
    return 0;
}

/* Demangled: android::AudioParameter::addKey(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter6addKeyERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameter6addKeyERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: unsigned short android::base::GetUintProperty<unsigned short>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15GetUintPropertyItEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void) {
    ALOGD("_ZN7android4base15GetUintPropertyItEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_() called");
    return 0;
}

/* Demangled: android::AudioParameter::~AudioParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterD1Ev(void) {
    ALOGD("_ZN7android14AudioParameterD1Ev() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: gsensor_selftest */
extern "C" __attribute__((visibility("default"))) int gsensor_selftest(void) {
    ALOGD("gsensor_selftest() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE6mTableE = NULL;

/* Demangled: android::base::WaitForPropertyCreation(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base23WaitForPropertyCreationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE(void) {
    ALOGD("_ZN7android4base23WaitForPropertyCreationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::base::ReadFdToString(android::base::borrowed_fd, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyPresentationId */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter17keyPresentationIdE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >::__push_back_slow_path<audio_usage_t const&>(audio_usage_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::base::StringPrintf(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base12StringPrintfEPKcz(void) {
    ALOGD("_ZN7android4base12StringPrintfEPKcz() called");
    return 0;
}

/* Demangled: long android::base::GetIntProperty<long>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14GetIntPropertyIlEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void) {
    ALOGD("_ZN7android4base14GetIntPropertyIlEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<aidl::android::hardware::light::ILights>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN4aidl7android8hardware5light7ILightsEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN4aidl7android8hardware5light7ILightsEED2Ev() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_stream_type_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::base::WriteFully(android::base::borrowed_fd, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvm(void) {
    ALOGD("_ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvm() called");
    return 0;
}

/* Demangled: short android::base::GetIntProperty<short>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, short, short, short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14GetIntPropertyIsEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void) {
    ALOGD("_ZN7android4base14GetIntPropertyIsEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_() called");
    return 0;
}

/* Demangled: android::base::StartsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Exported Object: iNvRamFileMaxLID */
extern "C" __attribute__((visibility("default"))) void* iNvRamFileMaxLID = NULL;

/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogdLoggerC2ENS0_5LogIdE(void) {
    ALOGD("_ZN7android4base10LogdLoggerC2ENS0_5LogIdE() called");
    return 0;
}

/* Demangled: android::base::GetBoolProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15GetBoolPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN7android4base15GetBoolPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: aidl::android::hardware::light::ILights::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl7android8hardware5light7ILights4hashE = NULL;

/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterC1ERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameterC1ERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::base::Basename(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::InputDeviceTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_17InputDeviceTraitsEE6mTableE = NULL;

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::fs_mgr::EnableMandatoryFlags(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_() called");
    return 0;
}

/* Demangled: unsigned long android::base::GetUintProperty<unsigned long>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15GetUintPropertyImEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void) {
    ALOGD("_ZN7android4base15GetUintPropertyImEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_() called");
    return 0;
}

/* Demangled: property_set */
extern "C" __attribute__((visibility("default"))) int property_set(void) {
    ALOGD("property_set() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: fs_mgr_get_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void) {
    ALOGD("_Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_() called");
    return 0;
}

/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void) {
    ALOGD("_ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE6mTableE = NULL;

/* Demangled: android::outputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::base::RemoveFileIfExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void) {
    ALOGD("_ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_() called");
    return 0;
}

/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogdLoggerC1ENS0_5LogIdE(void) {
    ALOGD("_ZN7android4base10LogdLoggerC1ENS0_5LogIdE() called");
    return 0;
}

/* Demangled: android::base::SetMinimumLogSeverity(android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE(void) {
    ALOGD("_ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: is_dt_compatible() */
extern "C" __attribute__((visibility("default"))) int _Z16is_dt_compatiblev(void) {
    ALOGD("_Z16is_dt_compatiblev() called");
    return 0;
}

/* Demangled: android::base::Realpath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void) {
    ALOGD("_ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: TemporaryDir::TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirC1Ev(void) {
    ALOGD("_ZN12TemporaryDirC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv() called");
    return 0;
}

/* Exported Object: stWifiCustomDefault */
extern "C" __attribute__((visibility("default"))) void* stWifiCustomDefault = NULL;

/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityD2Ev(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityD2Ev() called");
    return 0;
}

/* Demangled: unsigned int android::base::GetUintProperty<unsigned int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15GetUintPropertyIjEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void) {
    ALOGD("_ZN7android4base15GetUintPropertyIjEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv() called");
    return 0;
}

/* Demangled: android::base::Trim(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::ReadFullyAtOffset(android::base::borrowed_fd, void*, unsigned long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvml(void) {
    ALOGD("_ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvml() called");
    return 0;
}

/* Demangled: unsigned char android::base::GetUintProperty<unsigned char>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15GetUintPropertyIhEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void) {
    ALOGD("_ZN7android4base15GetUintPropertyIhEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_() called");
    return 0;
}

/* Demangled: bool android::base::ParseUint<unsigned short>(char const*, unsigned short*, unsigned short, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ParseUintItEEbPKcPT_S4_b(void) {
    ALOGD("_ZN7android4base9ParseUintItEEbPKcPT_S4_b() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyDeviceDisconnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter19keyDeviceDisconnectE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: property_get_bool */
extern "C" __attribute__((visibility("default"))) int property_get_bool(void) {
    ALOGD("property_get_bool() called");
    return 0;
}

/* Demangled: android::base::CachedProperty::CachedProperty(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14CachedPropertyC1EPKc(void) {
    ALOGD("_ZN7android4base14CachedPropertyC1EPKc() called");
    return 0;
}

/* Demangled: android::base::WriteStringToFd(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::base::borrowed_fd) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE(void) {
    ALOGD("_ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyInputSource */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter14keyInputSourceE = NULL;

/* Exported Object: android::TypeConverter<android::AudioFlagTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_15AudioFlagTraitsEE6mTableE = NULL;

/* Demangled: void std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >::__push_back_slow_path<audio_input_flags_t const&>(audio_input_flags_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: TemporaryFile::~TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileD1Ev(void) {
    ALOGD("_ZN13TemporaryFileD1Ev() called");
    return 0;
}

/* Demangled: android::base::GetExecutablePath() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17GetExecutablePathEv(void) {
    ALOGD("_ZN7android4base17GetExecutablePathEv() called");
    return 0;
}

/* Demangled: android::AudioParameter::getAt(unsigned long, android::String8&, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter5getAtEmRNS_7String8ES2_(void) {
    ALOGD("_ZNK7android14AudioParameter5getAtEmRNS_7String8ES2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::samplingRatesFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: fs_mgr_get_slot_suffix() */
extern "C" __attribute__((visibility("default"))) int _Z22fs_mgr_get_slot_suffixv(void) {
    ALOGD("_Z22fs_mgr_get_slot_suffixv() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_input_flags_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TemporaryFile::TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC2Ev(void) {
    ALOGD("_ZN13TemporaryFileC2Ev() called");
    return 0;
}

/* Demangled: android::base::EqualsIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::SetLogger(std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE(void) {
    ALOGD("_ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::operator()(android::base::LogId&&, android::base::LogSeverity&&, char const*&&, char const*&&, unsigned int&&, char const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_(void) {
    ALOGD("_ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_() called");
    return 0;
}

/* Demangled: android::AudioParameter::~AudioParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterD2Ev(void) {
    ALOGD("_ZN7android14AudioParameterD2Ev() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::channelMaskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone(std::__1::__function::__base<void (char const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_stream_type_t, std::__1::allocator<audio_stream_type_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::base::InitLogging(char**, std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&, std::__1::function<void (char const*)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE(void) {
    ALOGD("_ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_() called");
    return 0;
}

/* Demangled: android::base::GetProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11GetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN7android4base11GetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyAudioLanguagePreferred */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter25keyAudioLanguagePreferredE = NULL;

/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterC2ERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameterC2ERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: int android::base::GetIntProperty<int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14GetIntPropertyIiEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void) {
    ALOGD("_ZN7android4base14GetIntPropertyIiEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_() called");
    return 0;
}

/* Demangled: android::base::GetMinimumLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base21GetMinimumLogSeverityEv(void) {
    ALOGD("_ZN7android4base21GetMinimumLogSeverityEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone(std::__1::__function::__base<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE() called");
    return 0;
}

/* Demangled: android::base::ParseBool(std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ParseBoolENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE(void) {
    ALOGD("_ZN7android4base9ParseBoolENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE() called");
    return 0;
}

/* Exported Object: iFileCustomWIFILID */
extern "C" __attribute__((visibility("default"))) void* iFileCustomWIFILID = NULL;

/* Exported Object: android::AudioParameter::keyStreamConnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter16keyStreamConnectE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::toString(audio_source_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: bool android::base::ParseUint<unsigned char>(char const*, unsigned char*, unsigned char, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ParseUintIhEEbPKcPT_S4_b(void) {
    ALOGD("_ZN7android4base9ParseUintIhEEbPKcPT_S4_b() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: android::base::WaitForProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15WaitForPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_NS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE(void) {
    ALOGD("_ZN7android4base15WaitForPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_NS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_content_type_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_content_type_tEEE6mTableE = NULL;

/* Exported Object: android::TypeConverter<android::DefaultTraits<unsigned int> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE6mTableE = NULL;

/* Demangled: void std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >::__push_back_slow_path<audio_output_flags_t const&>(audio_output_flags_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::base::StringAppendV(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list(void) {
    ALOGD("_ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list() called");
    return 0;
}

/* Exported Object: iFileWIFILID */
extern "C" __attribute__((visibility("default"))) void* iFileWIFILID = NULL;

/* Exported Object: stFGConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stFGConfigDefault = NULL;

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Exported Object: android::AudioParameter::keyFrameCount */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter13keyFrameCountE = NULL;

/* Exported Object: android::AudioParameter::keyStreamDisconnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter19keyStreamDisconnectE = NULL;

/* Exported Object: android::AudioParameter::keyStreamSupportedChannels */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter26keyStreamSupportedChannelsE = NULL;

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::fs_mgr::GetEntriesForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void) {
    ALOGD("_ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE() called");
    return 0;
}

/* Demangled: android::base::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageD1Ev(void) {
    ALOGD("_ZN7android4base10LogMessageD1Ev() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::toString(audio_mode_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::base::Split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyReconfigA2dpSupported */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter24keyReconfigA2dpSupportedE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Exported Object: smartpa_calib_ConfigDefault */
extern "C" __attribute__((visibility("default"))) void* smartpa_calib_ConfigDefault = NULL;

/* Exported Object: android::AudioParameter::keyStreamHwAvSync */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter17keyStreamHwAvSyncE = NULL;

/* Demangled: TemporaryDir::~TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirD1Ev(void) {
    ALOGD("_ZN12TemporaryDirD1Ev() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogLine(char const*, unsigned int, android::base::LogSeverity, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_(void) {
    ALOGD("_ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_() called");
    return 0;
}

/* Demangled: android::base::CachedProperty::Get(bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14CachedProperty3GetEPb(void) {
    ALOGD("_ZN7android4base14CachedProperty3GetEPb() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyFormat */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter9keyFormatE = NULL;

/* Demangled: android::AudioParameter::getFloat(android::String8 const&, float&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter8getFloatERKNS_7String8ERf(void) {
    ALOGD("_ZNK7android14AudioParameter8getFloatERKNS_7String8ERf() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, char>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keySamplingRate */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter15keySamplingRateE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::toString(audio_format_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE6mTableE = NULL;

/* Demangled: TemporaryDir::TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirC2Ev(void) {
    ALOGD("_ZN12TemporaryDirC2Ev() called");
    return 0;
}

/* Demangled: android::base::DefaultAborter(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14DefaultAborterEPKc(void) {
    ALOGD("_ZN7android4base14DefaultAborterEPKc() called");
    return 0;
}

/* Demangled: android::AudioParameter::get(android::String8 const&, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter3getERKNS_7String8ERS1_(void) {
    ALOGD("_ZNK7android14AudioParameter3getERKNS_7String8ERS1_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyRouting */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter10keyRoutingE = NULL;

/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b(void) {
    ALOGD("_ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b() called");
    return 0;
}

/* Exported Object: android::AudioParameter::valueListSeparator */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter18valueListSeparatorE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_output_flags_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry>(android::fs_mgr::FstabEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::AudioParameter::toStringImpl(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter12toStringImplEb(void) {
    ALOGD("_ZNK7android14AudioParameter12toStringImplEb() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::fs_mgr::ReadFstabFromDt(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb(void) {
    ALOGD("_ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb() called");
    return 0;
}

/* Demangled: android::base::ReadFileToString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b(void) {
    ALOGD("_ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Exported Object: android::AudioParameter::valueOn */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter7valueOnE = NULL;

/* Demangled: android::AudioParameter::addFloat(android::String8 const&, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter8addFloatERKNS_7String8Ef(void) {
    ALOGD("_ZN7android14AudioParameter8addFloatERKNS_7String8Ef() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: bool android::base::ParseInt<long>(char const*, long*, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8ParseIntIlEEbPKcPT_S4_S4_(void) {
    ALOGD("_ZN7android4base8ParseIntIlEEbPKcPT_S4_S4_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_() called");
    return 0;
}

/* Demangled: TemporaryDir::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyChannels */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter11keyChannelsE = NULL;

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE6mTableE = NULL;

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: TemporaryFile::~TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileD2Ev(void) {
    ALOGD("_ZN13TemporaryFileD2Ev() called");
    return 0;
}

/* Demangled: android::base::Dirname(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::ReadFully(android::base::borrowed_fd, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ReadFullyENS0_11borrowed_fdEPvm(void) {
    ALOGD("_ZN7android4base9ReadFullyENS0_11borrowed_fdEPvm() called");
    return 0;
}

/* Demangled: android::base::GetExecutableDirectory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base22GetExecutableDirectoryEv(void) {
    ALOGD("_ZN7android4base22GetExecutableDirectoryEv() called");
    return 0;
}

/* Demangled: android::base::SetProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11SetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN7android4base11SetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Demangled: android::fs_mgr::GetEntryForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void) {
    ALOGD("_ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, long> std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEENS_21__tree_const_iteratorIS6_SI_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEENS_21__tree_const_iteratorIS6_SI_lEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: stGPSConfigDefault */
extern "C" __attribute__((visibility("default"))) void* stGPSConfigDefault = NULL;

/* Demangled: gsensor_init */
extern "C" __attribute__((visibility("default"))) int gsensor_init(void) {
    ALOGD("gsensor_init() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::operator()(char const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_format_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::formatsFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17formatsFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android17formatsFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}
