#include "GWBASIC.h"
#include <stdio.h>
#include <direct.h>  
#include <corecrt_math.h>
text output;
text input;
byte x = 1, y = 1;
byte fc = 1, bc = 1;
byte tm = C80;
//integer round(real x)
//{
//	return x >= 0 ? trunc(x + 0.5) : trunc(x - 0.5);
//}
void window(byte x, byte y, byte w, byte h) {
	//NOTICE:
}
void getdir(int i, string& s) {
	//NOTICE:
	s = ('C' + i);
	s = s+ ":";
	s = s + "\\\\";
}
float frac(float v) {
	return v - (integer)v;
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
	return 0U == _getdiskfree(drive, &d) 
		? (size_t)d.avail_clusters * (size_t)d.sectors_per_cluster * (size_t)d.bytes_per_sector
		: 0
		;
}