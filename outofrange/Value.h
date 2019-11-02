#pragma once
#include <string>
#include <iostream>

class Value {

 public:
 	Value(std::string str,double val) : m_str(str), m_value(val) {

 	}

 	void Print() const{
 		
 		std::cout<<m_str<<" = "<<m_value<<std::endl;
 	
 	}

 	~Value(){
 		std::cout<<"Destroying Value "<<m_value<<std::endl;
 	}


 	double get_val() const{
 		return m_value;
 	}

 	std::string get_str() const{
 		return m_str;
 	}

 	private:
 	std::string m_str;
 	double m_value;
 	

};
