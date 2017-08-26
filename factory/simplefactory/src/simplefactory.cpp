#include "../include/simplefactory.h"
#include "../include/base.h"
#include "../include/extend1.h"
#include "../include/extend2.h"

abstractfactory::abstractfactory(){}
abstractfactory::~abstractfactory(){}




simplefactory::simplefactory(){}
simplefactory::~simplefactory(){}

base* simplefactory::getObj(const int &num){
	base *obj = nullptr;
	if(num == 1){
		obj = new extend1();
	}
	else if(num == 2){
		obj = new extend2();
	}
	return obj;
}