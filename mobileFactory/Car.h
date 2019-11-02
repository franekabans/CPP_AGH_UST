#pragma once
#include <string>
#include <iostream>


//static variable defining default color of cars
static std::string m_default_color = "Red";

//base class Car
class Car{

 public:
 	Car(){

 	}
 	Car(std::string type,std::string fuel,int power,int capacity) : m_type(type), m_fuel(fuel) , m_capacity(capacity) , m_power(power) {
 		
 	}

 	//output operator definition needed
 	friend std::ostream& operator<<(std::ostream& out,const Car& obj){
 		out << "[Info] Car:: Type "<<obj.m_type<<std::endl;
 		out << "[Info] Car:: Color "<<m_default_color<<std::endl;
 		out << "[Info] Engine:: Fluel "<<obj.m_fuel<<std::endl;
 		out << "[Info] Engine:: Capacity "<<obj.m_capacity<<" [cm^3]"<<std::endl;
 		out << "[Info] Engine:: Power "<<obj.m_power<<" [kW]";

 		return out;
 	}

 	static void DefaultColor(std::string kolor){
 	m_default_color = kolor;
 	}

 
 	
 private:
 	//needed variables for Car
 	std::string m_type;
 	std::string m_fuel;
 	int m_capacity;
 	int m_power;

};
