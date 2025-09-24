#include "GWBASIC.h"
#include <stdio.h>
#include <direct.h>  
text output;
text input;
byte x = 1, y = 1;
byte fc = 1, bc = 1;
byte tm = C80;
integer round(real x)
{
	return x >= 0 ? trunc(x + 0.5) : trunc(x - 0.5);
}
size_t length(string& s) {
	return s.length();
}
void flush() {

}
byte wherey() {
	return y;
}
byte wherex() {
	return x;
}
void window(byte x, byte y, byte w, byte h) {
	//TODO:
}
void gotoxy(byte _x, byte _y) {
	x = _x;
	y = _y;
}
void clreol() {
	//TODO:
}
void textcolor(byte color) {
	fc = color;
}
void textbackground(byte color) {
	bc = color;
}
void clrscr() {
	//TODO:
}
void getdir(int i, string& s) {
	//TODO:
}
float frac(float v) {
	return v - (integer)v;
}

void sound(int f) {
	//TODO:
}
void nosound() {
	//TODO:
}
void chdir(string& path) {
	//NOTICE:
	::_chdir(path);
}
void mkdir(string& path) {
	//NOTICE:
	::_mkdir(path);
}
void rmdir(string& path) {
	//NOTICE:
	::_rmdir(path);
}

void erase(untyped_file& f) {
	//NOTICE:
	::_unlink(f.desc.name);
}

void textmode(byte mode) {
	tm = mode;
}

int doserror() {
	return errno;
}

size_t diskfree(byte drive) {
	_diskfree_t d = { 0 };
	//NOTICE:
	_getdiskfree(drive, &d);

	return d.avail_clusters * d.sectors_per_cluster * d.bytes_per_sector;
}