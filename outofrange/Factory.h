#pragma once
#include <vector>
#include <string>
#include "Value.h"
#include "OutOfRange.h"

class Factory{

 public:
 	Factory(int a,int b): m_up(b), m_down(a){
 		std::cout<<"Build factory with range ["<<a<<","<<b<<"]"<<std::endl;
 	}

 	Value* PrepareValue(std::string str,double val);

 	~Factory();

 	int get_up() const;
 	int get_down() const;
 	

 private:
 	int m_up;
 	int m_down;
 	std::vector<Value*> m_values;


};
