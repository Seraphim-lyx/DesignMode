#include <iostream>
#include <memory>
#include "../include/singleton.h"
using namespace std;
singleton::singleton(){}
singleton::~singleton(){}


singleton* singleton::getInstance(){
	return singletonfactory().getInstance();
}

void singleton::f(int n){
	a = n;
}
void singleton::printt(){
	cout<< a << endl;
}

singleton::singletonfactory::singletonfactory(){}
singleton::singletonfactory::~singletonfactory(){}
singleton* singleton::singletonfactory::getInstance(){
	return instance; 
}

singleton* singleton::singletonfactory::instance = new singleton();