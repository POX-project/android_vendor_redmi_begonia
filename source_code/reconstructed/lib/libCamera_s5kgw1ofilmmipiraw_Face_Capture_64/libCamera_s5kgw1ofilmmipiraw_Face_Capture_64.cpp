/*
 * Reverse-Engineered Source for: libCamera_s5kgw1ofilmmipiraw_Face_Capture_64.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5kgw1ofilmmipiraw_Face_Capture_64"

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
#include "libCamera_s5kgw1ofilmmipiraw_Face_Capture_64.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0482 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0619 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0483 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0484 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0485 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0486 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0610 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0487 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0611 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0488 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0612 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0590 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0489 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0613 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0591 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0614 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0592 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0615 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0593 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0616 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0594 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0617 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0595 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0430 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0430 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0560 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0618 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0596 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0431 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0431 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0561 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0530 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0619 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0619 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0597 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0432 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0432 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0562 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0531 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0598 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0433 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0433 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0563 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0532 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0599 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0434 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0434 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0564 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0533 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0510 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0435 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0435 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0565 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0400 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0400 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0534 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0511 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0436 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0436 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0566 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0401 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0401 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0535 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0512 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0437 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0437 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0567 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0402 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0402 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0500 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0536 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0513 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0590 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0590 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0438 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0438 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0568 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0403 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0403 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0501 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0537 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0514 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0591 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0591 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0439 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0439 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0569 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0404 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0404 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0502 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0538 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0515 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0592 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0592 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0405 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0405 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0503 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0539 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0516 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0593 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0593 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0406 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0406 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0504 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0517 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0594 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0594 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0407 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0407 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0505 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0518 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0595 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0595 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0620 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0620 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0560 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0560 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0408 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0408 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0506 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0519 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0596 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0596 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0621 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0621 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0561 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0561 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0409 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0409 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0507 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0597 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0597 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0622 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0622 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0562 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0562 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0508 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0598 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0598 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0623 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0623 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0563 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0563 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0509 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0599 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0599 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0624 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0624 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0564 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0564 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0625 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0625 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0565 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0565 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0626 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0626 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_THRES_0006 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_THRES_0006 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0490 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0566 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0566 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0080 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0627 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0627 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0491 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0567 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0567 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0320 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0081 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0628 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0628 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0492 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0568 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0568 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0321 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0082 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0629 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0629 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0480 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0493 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0569 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0569 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0322 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0083 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0481 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0494 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0323 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0084 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0482 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0482 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0495 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0324 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0085 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0483 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0483 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0496 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0325 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0086 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0620 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0620 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0484 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0484 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0497 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0326 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0087 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0621 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0621 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0485 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0485 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0498 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0327 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0088 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0622 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0622 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0486 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0486 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0499 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0328 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0089 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0623 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0623 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0487 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0487 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0329 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0624 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0624 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0488 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0488 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0625 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0625 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0489 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0489 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0626 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0626 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0627 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0627 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0570 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0628 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0628 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0571 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0629 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0629 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0120 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0120 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0572 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0121 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0121 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0573 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0080 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0080 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0122 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0122 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0574 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0320 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0320 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0520 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0081 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0081 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0123 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0123 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0575 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0321 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0321 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0410 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0410 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0521 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0082 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0082 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0124 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0124 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0576 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0322 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0322 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0411 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0411 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0522 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0083 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0083 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0125 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0125 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0577 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0323 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0323 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0412 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0412 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0510 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0510 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0523 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0084 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0084 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0126 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0126 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0578 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0324 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0324 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0413 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0413 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0511 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0511 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0524 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0085 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0085 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0127 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0127 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0579 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0325 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0325 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0414 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0414 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0512 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0512 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0525 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0086 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0086 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0128 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0128 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0326 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0326 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0415 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0415 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0513 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0513 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0526 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0087 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0087 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0129 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0129 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0327 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0327 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0416 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0416 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0514 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0514 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0527 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0088 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0088 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0328 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0328 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0417 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0417 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0515 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0515 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0528 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0089 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0089 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0630 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0630 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0570 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0570 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0329 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0329 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0418 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0418 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0516 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0516 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0529 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0631 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0631 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0571 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0571 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0419 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0419 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0517 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0517 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0632 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0632 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0572 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0572 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0518 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0518 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0633 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0633 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0573 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0573 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0519 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0519 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0634 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0634 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_AWB_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_AWB_0004 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0574 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0574 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0635 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0635 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0575 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0575 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0600 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0636 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0636 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0576 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0576 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0090 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0601 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0637 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0637 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0577 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0577 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0330 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0091 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0602 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0638 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0638 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0578 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0578 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0331 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0092 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0603 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0639 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0639 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0490 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0490 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0579 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0579 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0332 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0093 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0604 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0491 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0491 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0333 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0094 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0605 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0492 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0492 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0334 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0095 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0606 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0493 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0493 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0335 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0096 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0630 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0630 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0607 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0494 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0494 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0336 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0097 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0631 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0631 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0608 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0495 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0495 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0337 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0098 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0632 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0632 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0609 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0496 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0496 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0338 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MIXER3_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MIXER3_0099 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0633 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0633 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0497 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0497 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_LCE_LINK_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_LCE_LINK_0339 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0634 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0634 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0498 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0498 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0635 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0635 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0499 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0499 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0600 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0600 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0636 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0636 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0601 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0601 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0637 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0637 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0602 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0602 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0638 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0638 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0580 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0603 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0603 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0639 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0639 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0581 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0130 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0130 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0604 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0604 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0582 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0131 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0131 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0090 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0090 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0605 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0605 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0583 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0132 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0132 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0330 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0330 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0530 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0530 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0091 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0091 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0606 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0606 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0584 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0133 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0133 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0331 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0331 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0531 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0531 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0092 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0092 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0607 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0607 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0585 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0134 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0134 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0420 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0420 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0332 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0332 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0532 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0532 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0093 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0093 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFNR_0004 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFNR_0004 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0608 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0608 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0586 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0135 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0135 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0421 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0421 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0333 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0333 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0520 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0520 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0533 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0533 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0094 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0094 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0609 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0609 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0587 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0136 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0136 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0422 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0422 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0334 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0334 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0521 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0521 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0534 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0534 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0095 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0095 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0588 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0137 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0137 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0423 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0423 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0335 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0335 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0522 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0522 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0535 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0535 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0096 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0096 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0589 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0138 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0138 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0424 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0424 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0336 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0336 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0523 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0523 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0500 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0500 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0536 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0536 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0097 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0097 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_SWNR_0139 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_SWNR_0139 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0425 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0425 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0337 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0337 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0524 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0524 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0501 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0501 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0537 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0537 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0098 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0098 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0426 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0426 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0338 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0338 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0525 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0525 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0502 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0502 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0538 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0538 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_MFB_0099 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_MFB_0099 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0427 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0427 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NR3D_0339 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NR3D_0339 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0526 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0526 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0503 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0503 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0539 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0539 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0580 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0580 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0428 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0428 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0527 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0527 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0504 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0504 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0581 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0581 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_UDM_0429 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_UDM_0429 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0528 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0528 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0505 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0505 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0582 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0582 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_EE_0529 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_EE_0529 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0506 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0506 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0583 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0583 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0507 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0507 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0584 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0584 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0508 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0508 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0585 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0585 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0610 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0610 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0509 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0509 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0586 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0586 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0611 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0611 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0587 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0587 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0612 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0612 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0588 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0588 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0613 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0613 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC2_ANR2_0589 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC2_ANR2_0589 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0614 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0614 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0615 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0615 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0616 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0616 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0480 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0480 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0617 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0617 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_HFG_0481 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_HFG_0481 = NULL;

/* Exported Object: s5kgw1ofilmmipiraw_NBC_ANR_0618 */
extern "C" __attribute__((visibility("default"))) void* s5kgw1ofilmmipiraw_NBC_ANR_0618 = NULL;
