#pragma once
#include "typ2.h"

class typ4 : public typ2{

 public:
 	virtual void PrzedstawSie(){
 		std::cout<<"Nazywam sie "<<4<<" (adres obiektu: "<<this<<")"<<std::endl;
 	}

 private:

};
