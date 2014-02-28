#ifndef FG_UTIL_IMPORT_H
#define FG_UTIL_IMPORT_H

#include "fg/util/extern.h"

#ifndef FGEXPORT

#   if defined COMPILER_TYPE_CLANG  // COMPILER_TYPE
#       define FGEXPORT FGEXTERN
#   elif defined COMPILER_TYPE_MSVC // COMPILER_TYPE
#       define FGEXPORT FGEXTERN __declspec( dllimport )
#   else   // COMPILER_TYPE
#       error 未対応のコンパイラタイプ
#   endif  // COMPILER_TYPE

#   include "fg/util/declarefunction.h"

#endif  // FGEXPORT

#endif  // FG_UTIL_IMPORT_H
