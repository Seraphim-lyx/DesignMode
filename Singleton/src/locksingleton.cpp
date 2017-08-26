#include "../include/locksingleton.h"
#include <iostream>
#include <mutex>  
#include <thread>   
using namespace std;
std::mutex foo,bar;
locksingleton* locksingleton::instance = nullptr;
locksingleton::locksingleton(){}
locksingleton::~locksingleton(){}

locksingleton* locksingleton::getInstance(){
	if(instance == nullptr){
		//lock()
		if(instance == nullptr){
			instance = new locksingleton();
		}
		//unlock()
	

	}
	return instance;
}