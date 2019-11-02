#pragma once
#include "Mercedes.h"
#include "Ford.h"

//class Factory with template fuctions 
class Factory{

 public:
 	//default argument as a bool when called with 0 , then diffrent behaviour
 	template <typename T>
 	const T& prototype(const T& typ,bool zero_or_one = 1){
 		static T m_car;

 		if(zero_or_one == 1)
 			m_car = typ;

 		return m_car;
 	}
 	//calling prototype
 	template <typename T>
 	const T& produce(){
 		return prototype(T(),0);
 	}


 private:

};
