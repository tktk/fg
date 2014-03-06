#ifndef FG_STRCONV_TOUTF16_H
#define FG_STRCONV_TOUTF16_H

#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

enum {
    FG_MAX_UTF16_CHAR_COUNT = 2,
};

FG_FUNCTION_BOOL(
    fgToUtf16FromString(
        FgUtf16 *           _to
        , const FgString *  _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToUtf16FromUtf8(
        FgUtf16 *          _to
        , const FgUtf8 *    _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToUtf16FromUtf32(
        FgUtf16 *           _to
        , const FgUtf32 *   _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

#endif  // FG_STRCONV_TOUTF16_H
