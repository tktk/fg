#ifndef FG_BOOT_CONFIG_H
#define FG_BOOT_CONFIG_H

#include "fg/def/boot/config.h"
#include "fg/def/common/primitives.h"
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

FG_FUNCTION_BOOL(
    fgBootConfigSetMainFile(
        FgBootConfig *      _this
        , const FgUtf32 *   _MAIN_FILE
    )
)

FG_FUNCTION_BOOL(
    fgBootConfigSetMainType(
        FgBootConfig *      _this
        , const FgUtf32 *   _MAIN_TYPE
    )
)

#endif  // FG_BOOT_CONFIG_H
