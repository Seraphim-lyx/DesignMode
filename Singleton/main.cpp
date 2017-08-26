#include "include/singleton.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	singleton *obj = singleton().getInstance();
	singleton *obj2 = singleton().getInstance();
	obj2->f(2);
	// obj->f(1);
	obj2->printt();
	delete obj;
	return 0;
}