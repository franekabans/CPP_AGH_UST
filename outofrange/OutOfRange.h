#pragma once
#include <string>
#include <iostream>
#include <cstdlib>

class Value;
class Factory;




class OutOfRange {
	
	friend std::ostream& operator <<(std::ostream& out, const OutOfRange& val);


 public:

 	OutOfRange(Value * val,Factory * fact);
 	
 	void CleanFactory();


 	private:
 	Value * m_val;
 	Factory * m_fact;
};
