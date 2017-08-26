#ifndef simplefactory_H
#define simplefactory_H
#include "base.h"
class abstractfactory{
	public:
		abstractfactory();
		virtual ~abstractfactory()=0;

	public:
		virtual base* getObj(const int&)=0;
};

class simplefactory : public abstractfactory
{
	public:
		simplefactory();
		virtual ~simplefactory();

	public:
		base* getObj(const int&);
	
};
#include "../src/simplefactory.cpp"
#endif