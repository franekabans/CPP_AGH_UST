#pragma once
#include <iostream>

class typ1{

 public:
 	typ1() {
 		
 	}
 	virtual void PrzedstawSie(){
 		std::cout<<"Nazywam sie "<<1<<" (adres obiektu: "<<this<<")"<<std::endl;
 	}

 	virtual ~typ1(){
 		
 	}

 private:

 

};
