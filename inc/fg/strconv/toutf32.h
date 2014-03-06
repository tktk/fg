#ifndef FG_STRCONV_TOUTF32_H
#define FG_STRCONV_TOUTF32_H

#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

enum {
    FG_MAX_UTF32_CHAR_COUNT = 1,
};

FG_FUNCTION_BOOL(
    fgToUtf32FromString(
        FgUtf32 *           _to
        , const FgString *  _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToUtf32FromUtf8(
        FgUtf32 *           _to
        , const FgUtf8 *    _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToUtf32FromUtf16(
        FgUtf32 *           _to
        , const FgUtf16 *   _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

#endif  // FG_STRCONV_TOUTF32_H
