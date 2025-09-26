#ifndef __GWBASIC_H__
#define __GWBASIC_H__
#include "ptoc.h"
#include "cio.h"
#include "array.h"
#include "set.h"
#include "paslib.h"
#include <stdio.h>
#include <io.h>
#include "conio2.h"
#include "graph.h"

//#define low(x) (0)
//#define high(x) (x.size()-1)
#define C40 1
#define C80 3

#define blockread(f, buf, size, read) BlockRead(f,(void*)buf,size,read)

void erase(untyped_file& f);
int doserror();
#endif
