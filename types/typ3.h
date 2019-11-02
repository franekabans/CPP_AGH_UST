#pragma once
#include "typ1.h"

class typ3 : public typ1{

 public:
 	virtual void PrzedstawSie(){
 		std::cout<<"Nazywam sie "<<3<<" (adres obiektu: "<<this<<")"<<std::endl;
 	}

 private:

};
