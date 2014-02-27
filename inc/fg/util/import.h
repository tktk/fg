#ifndef FG_UTIL_IMPORT_H
#define FG_UTIL_IMPORT_H

#include "fg/util/extern.h"

#ifndef FGEXPORT

#   include "fg/def/common/primitives.h"

#   if defined COMPILER_TYPE_CLANG  // COMPILER_TYPE
#       define FGEXPORT FGEXTERN
#   elif defined COMPILER_TYPE_MSVC // COMPILER_TYPE
#       define FGEXPORT FGEXTERN __declspec( dllimport )
#   else   // COMPILER_TYPE
#       error 未対応のコンパイラタイプ
#   endif  // COMPILER_TYPE

#   define FG_DECLARE_FUNCTION( _func, _returnType ) \
        FGEXPORT _returnType _func;
#   define FG_FUNCTION_VOID( _func ) \
        FG_DECLARE_FUNCTION( _func, void )
#   define FG_FUNCTION_BOOL( _func ) \
        FG_DECLARE_FUNCTION( _func, FgBool )
#   define FG_FUNCTION_NUM( _func, _returnType ) \
        FG_DECLARE_FUNCTION( _func, _returnType )
#   define FG_FUNCTION_PTR( _func, _returnType ) \
        FG_DECLARE_FUNCTION( _func, _returnType * )
#   define FG_FUNCTION_ENUM( _func, _returnType, _dummyValue ) \
        FG_DECLARE_FUNCTION( _func, _returnType )

#endif  // FGEXPORT

#endif  // FG_UTIL_IMPORT_H
