#ifndef FG_BOOT_CONFIG_H
#define FG_BOOT_CONFIG_H

#include "fg/def/boot/config.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    fgBootConfigNew(
    )
    , FgBootConfig
)

FG_FUNCTION_VOID(
    fgBootConfigFree(
        FgBootConfig *  _this
    )
)

#endif  // FG_BOOT_CONFIG_H
