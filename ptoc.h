#ifndef __PTOC_H__
#define __PTOC_H__

#ifndef TURBO_PASCAL
#define TURBO_PASCAL
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <assert.h>

#define items(x) (sizeof(x)/sizeof(*(x)))

typedef int           integer;
typedef unsigned      cardinal; /* unsigned integer */
typedef float         real;
typedef real		  single; /* single precision floating point */
typedef long long      longint;
typedef unsigned       word; /* It should have the same size as integer */ 
typedef unsigned char  byte; 
typedef signed char    shortint; 
typedef void*          pointer;
typedef const char*    asciiz;

typedef unsigned char boolean; 
#ifndef __cplusplus
#define true          (1)
#define false         (0)
#endif
#define nil           NULL

#define EXTERN        extern

/*
 * Pascal runtime library headers
 */


#endif

