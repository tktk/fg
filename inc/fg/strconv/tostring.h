#ifndef FG_STRCONV_TOSTRING_H
#define FG_STRCONV_TOSTRING_H

#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_NUM(
    fgGetMaxStringCharCount(
    )
    , FgSize
)

FG_FUNCTION_BOOL(
    fgToStringFromUtf8(
        FgString *          _to
        , const FgUtf8 *    _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToStringFromUtf16(
        FgString *          _to
        , const FgUtf16 *   _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToStringFromUtf32(
        FgString *          _to
        , const FgUtf32 *   _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

#endif  // FG_STRCONV_TOSTRING_H
