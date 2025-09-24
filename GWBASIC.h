#ifndef __GWBASIC_H__
#define __GWBASIC_H__
#include "ptoc.h"
#include "io.h"
#include "array.h"
#include "set.h"
#include "graph.h"
#include "paslib.h"

#define low(x) (0)
#define high(x) (x.size()-1)
#define C40 1
#define C80 3
#define blockread(f, buf, size, read) 
#define format(a,b,c) ("")

size_t length(string& s);

void flush();
byte wherey();
byte wherex();
void window(byte x, byte y, byte w, byte h);
void gotoxy(byte x, byte y);
void clreol();
void textcolor(byte color);
void textbackground(byte color);
void clrscr();
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

int reset(untyped_file& f, int i);
integer round(real v);
#endif
