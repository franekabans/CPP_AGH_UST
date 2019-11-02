#include "Factory.h"


Value* Factory::PrepareValue(std::string str,double val) {
 		std::cout<<"Manufacturing value "<<val<<std::endl;

 		Value* val1 = new Value(str,val);
 		m_values.push_back(val1);
 		if(val < m_down | val > m_up){
 			OutOfRange out(val1,this);
 			throw out;
 		}

 		return val1;

 	}

int Factory::get_up()const {
 		return m_up;

}

int Factory::get_down() const{
 		return m_down;
}

Factory::~Factory(){
 	for (unsigned i =0 ;i < m_values.size();i++){
 		delete m_values.at(i);
 	}
 	std::cout<<"Factory Destroyed"<<std::endl;
 }



