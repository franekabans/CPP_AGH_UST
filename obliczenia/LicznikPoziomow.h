#pragma once
#include <iostream>

///counter of levels of errors
class LicznikPoziomow{

 public:
 	//loud constructor
 	LicznikPoziomow();
 	//loud destructor
 	~LicznikPoziomow();
 private:
 	//static level variable
 	static int m_poziom;
};
