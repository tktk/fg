#ifndef FG_STRCONV_TOUTF8_H
#define FG_STRCONV_TOUTF8_H

#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

enum {
    FG_MAX_UTF8_CHAR_COUNT = 6,
};

FG_FUNCTION_BOOL(
    fgToUtf8FromString(
        FgUtf8 *            _to
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    fgToUtf8FromUtf16(
        FgUtf8 *            _to
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    fgToUtf8FromUtf32(
        FgUtf8 *            _to
        , const FgUtf32 *   _FROM
    )
)

#endif  // FG_STRCONV_TOUTF8_H
