#pragma once
#include <iostream>
#include <string>

class Silnik{

 public:
 	Silnik();
 	Silnik(int moc,float pojemnosc,std::string paliwo);    

 private:
 	int m_moc;
 	float m_pojemnosc;
 	std::string m_paliwo;

};
