#include "GWBASIC.h"

text output;
text input;

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
	return 0;
}
byte wherex() {
	return 0;
}
void window(byte x, byte y, byte w, byte h) {
}
void gotoxy(byte x, byte y) {
}
void clreol() {
}
void textcolor(byte color) {
}
void textbackground(byte color) {
}
void clrscr() {
}
void getdir(int i, string& s) {

}
float frac(float v) {
	return v - (integer)v;
}

void sound(int f) {
}
void nosound() {

}
void chdir(string& path) {

}
void mkdir(string& path) {

}
void rmdir(string& path) {

}

void erase(untyped_file& f) {

}

void textmode(byte mode) {

}

int doserror() {
	return errno;
}

int reset(untyped_file& f, int i) {
	return 0;
}

