#include "GWBASIC.h"

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
	//TODO:
}
void mkdir(string& path) {
	//TODO:
}
void rmdir(string& path) {
	//TODO:
}

void erase(untyped_file& f) {
	//TODO:
}

void textmode(byte mode) {
	tm = mode;
}

int doserror() {
	return errno;
}

int reset(untyped_file& f, int i) {
	//TODO:
	return 0;
}

