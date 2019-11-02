#include "Silnik.h"

Silnik::Silnik(){
	
}

Silnik::Silnik(int moc,float pojemnosc,std::string paliwo) :  m_paliwo(paliwo){
	m_moc = moc;//just touch
	m_pojemnosc = pojemnosc;//just touch

}
