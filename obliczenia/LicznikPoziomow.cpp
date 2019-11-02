#include "LicznikPoziomow.h"

int LicznikPoziomow::m_poziom = 0;

LicznikPoziomow::LicznikPoziomow(){
	++m_poziom;
	std::cout<<"Rozpoczynam poziom numer "<<m_poziom<<"."<<std::endl;
}



LicznikPoziomow::~LicznikPoziomow(){
	std::cout<<"Konczymy poziom numer "<<m_poziom<<"."<<std::endl;
	--m_poziom;
}
