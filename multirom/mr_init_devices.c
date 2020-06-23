#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    // FrameBuffers
    "/sys/class/graphics/fb0",
    "/sys/bus/platform/drivers/msmdrm_smmu",
    "/sys/bus/platform/drivers/drm_dsi_ctrl",
    "/sys/bus/platform/drivers/msm_drm",
    "/sys/module/msm_drm",
    "/sys/module/drm_kms_helper",
    "/sys/module/drm",

    // Storage devices
    "/sys/dev/block/*",
    "/sys/block/*",
    //"/sys/block/sdb",
    //"/sys/block/sdc",
    //"/sys/block/sdd",
    //"/sys/block/sde",
    //"/sys/block/sdf",
    //"/sys/module/mmcblk",

    // Internal storage
    "/dev/block/platform/soc/c0c4000.sdhci",
    "/dev/block/platform/soc/c0c4000.sdhci/mmcblk*",
    "/dev/block/platform/soc/c0c4000.sdhci/by-name/*",
    "/dev/block/platform/soc/c084000.sdhci/*",
 
    // External storage
    //"/sys/block/mmcblk1",
    //"/sys/block/mmcblk1",
    //"/sys/block/mmcblk1/mmcblk1p1",
    //"/sys/block/mmcblk1/mmcblk1p2",

    // Devices
    "/sys/bus*",
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/devices*",
    "/sys/module*",
    "/sys/devices/virtual/mem/null",
    "/sys/devices/virtual/misc/fuse",

    // Inputs
    "/sys/class/input/event*",
    "/sys/class/input/input*",
    "/sys/class/misc/uinput",
    "/sys/class/tty/ptmx",
    "/sys/devices/platform/soc/soc:gpio_keys/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc/c175000.i2c/i2c-1/1-0062",

    // ADB
    "/sys/devices/virtual/tty/ptmx",
    "/sys/bus/usb",
    "/sys/bus/usb-serial",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/class/misc/android_adb",
    "/sys/devices/virtual/misc/mtp_usb",

    // USB
    "/sys/bus/usb",
    "/sys/bus/platform/drivers/xhci-hcd*",
    "/sys/devices/platform/soc/a800000.ssusb/a800000.dwc3/",
    "/sys/devices/platform/soc/c200000.hsusb/c200000.dwc3/",

    // Encryption
    "/sys/devices/virtual/icesdcc/iceufs",
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/misc/ion",
    "/sys/devices/virtual/qseecom/qseecom",

    // Logging
    "/sys/devices/virtual/mem/kmsg",

    NULL
};
