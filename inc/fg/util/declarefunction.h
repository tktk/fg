#ifndef FG_UTIL_DECLAREFUNCTION_H
#define FG_UTIL_DECLAREFUNCTION_H

#include "fg/def/common/primitives.h"

#define FG_DECLARE_FUNCTION( _func, _returnType ) \
    FGEXPORT _returnType _func;
#define FG_FUNCTION_VOID( _func ) \
    FG_DECLARE_FUNCTION( _func, void )
#define FG_FUNCTION_BOOL( _func ) \
    FG_DECLARE_FUNCTION( _func, FgBool )
#define FG_FUNCTION_NUM( _func, _returnType ) \
    FG_DECLARE_FUNCTION( _func, _returnType )
#define FG_FUNCTION_PTR( _func, _returnType ) \
    FG_DECLARE_FUNCTION( _func, _returnType * )
#define FG_FUNCTION_ENUM( _func, _returnType, _dummyValue ) \
    FG_DECLARE_FUNCTION( _func, _returnType )

#endif  // FG_UTIL_DECLAREFUNCTION_H
