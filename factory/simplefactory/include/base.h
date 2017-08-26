#ifndef bash_H
#define bash_H
#include <iostream>
using namespace std;
class base{
	public:
		base();
		virtual ~base() = 0;

	public:
		virtual void f1()=0;
		
};
#include "../src/base.cpp"

#endif