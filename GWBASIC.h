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

#define low(x) (0)
#define high(x) (x.size()-1)
#define C40 1
#define C80 3

#define blockread(f, buf, size, read) BlockRead(f,(void*)buf,size,read)

#define format(a,b,c) (a)

size_t length(string& s);

void flush();
void window(byte x, byte y, byte w, byte h);
void getdir(int i, string& s);
float frac(float v);
void sound(int f);
void nosound();
void chdir(string& path);
void mkdir(string& path);
void rmdir(string& path);
void erase(untyped_file& f);
void textmode(byte mode);
int doserror();
size_t diskfree(byte drive);
integer round(real v);
#endif
