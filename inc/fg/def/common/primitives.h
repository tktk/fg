﻿#ifndef FG_DEF_COMMON_PRIMITIVES_H
#define FG_DEF_COMMON_PRIMITIVES_H

#include <stddef.h>

#ifndef __cplusplus
#   include <stdbool.h>
#   include <uchar.h>
#endif  // __cplusplus

typedef bool FgBool;

typedef size_t FgSize;

typedef char FgByte;
typedef unsigned char FgUByte;
typedef short FgShort;
typedef unsigned short FgUShort;
typedef int FgInt;
typedef unsigned int FgUInt;
typedef long long FgLong;
typedef unsigned long long FgULong;

typedef float FgFloat;
typedef double FgDouble;

typedef char FgStringChar;
typedef char FgUtf8Char;
typedef char16_t FgUtf16Char;
typedef char32_t FgUtf32Char;

typedef struct FgString
{
    FgStringChar *  ptr;
    FgSize          length;
} FgString;

typedef struct FgUtf8
{
    FgUtf8Char *    ptr;
    FgSize          length;
} FgUtf8;

typedef struct FgUtf16
{
    FgUtf16Char *   ptr;
    FgSize          length;
} FgUtf16;

typedef struct FgUtf32
{
    FgUtf32Char *   ptr;
    FgSize          length;
} FgUtf32;

#endif  // FG_DEF_COMMON_PRIMITIVES_H
