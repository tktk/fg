#ifndef FG_UTIL_EXPORTDUMMY_H
#define FG_UTIL_EXPORTDUMMY_H

#include "fg/def/common/primitives.h"
#include "fg/util/exportcommon.h"

#include <stddef.h>

#define FG_DEFINE_FUNCTION( _func, _returnType, _dummyProc ) \
    FGEXPORT _returnType _func { _dummyProc }
#define FG_FUNCTION_VOID( _func ) \
    FG_DEFINE_FUNCTION( _func, void, )
#define FG_FUNCTION_BOOL( _func ) \
    FG_DEFINE_FUNCTION( _func, FgBool, return false; )
#define FG_FUNCTION_NUM( _func, _returnType ) \
    FG_DEFINE_FUNCTION( _func, _returnType, return 0; )
#define FG_FUNCTION_PTR( _func, _returnType ) \
    FG_DEFINE_FUNCTION( _func, _returnType *, return NULL; )
#define FG_FUNCTION_ENUM( _func, _returnType, _dummyValue ) \
    FG_DEFINE_FUNCTION( _func, _returnType, return _dummyValue; )

#endif  // FG_UTIL_EXPORTDUMMY_H
