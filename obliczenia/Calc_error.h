#pragma once
#include <stdexcept>
#include <iostream>
#include <string>
//class of error contain pointer to "parent" error
class Calc_error : public std::runtime_error{

 public:
 	//comlicated constructor
 	Calc_error(std::runtime_error* err,const std::string mess,const std::string file,const int line) : 
 	std::runtime_error(mess + ",[plik = "+file+",linia = "+std::to_string(line)+"]"), m_err(err){

 	}
 	//static handler of our errors, inside there is a  dynamic casting which helps a lot
	static void handler();
 private:
 	//pointer to previous error
 	std::runtime_error * m_err;
};
