#ifndef FG_STRCONV_TOUTF8_H
#define FG_STRCONV_TOUTF8_H

#include "fg/def/strconv/toutf8.h"
#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_BOOL(
    fgToUtf8FromString(
        FgUtf8 *            _to
        , const FgString *  _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToUtf8FromUtf16(
        FgUtf8 *            _to
        , const FgUtf16 *   _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

FG_FUNCTION_BOOL(
    fgToUtf8FromUtf32(
        FgUtf8 *            _to
        , const FgUtf32 *   _FROM
        , FgSize *          _outputLength
        , FgSize *          _inputLength
    )
)

#endif  // FG_STRCONV_TOUTF8_H
