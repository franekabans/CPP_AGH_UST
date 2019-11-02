#pragma once
#include <string>
#include <iostream>
#include "Car.h"
//derived class mercedes , inherits from Car
class Mercedes : public Car{

 public:
 	Mercedes(){
 		
 	}
 	Mercedes(std::string fuel,int capacity,int power) : Car("Mercedes",fuel,capacity,power){

 	}
 
 private:

};
