#include "GWBASIC.h"
#include <stdio.h>
#include <direct.h>  
#include <corecrt_math.h>
text output;
text input;

void erase(untyped_file& f) {
	//NOTICE:
	::_unlink(f.desc.name);
}
