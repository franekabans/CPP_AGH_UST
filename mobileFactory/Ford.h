#pragma once
#include <string>
#include <iostream>
#include "Car.h"
//derived class Ford inherits from Car
class Ford : public Car{

 public:
 	Ford(){
 		
 	}

 	Ford(std::string fuel,int capacity,int power) : Car("Ford",fuel,capacity,power){

 	}
 	
 private:
};
