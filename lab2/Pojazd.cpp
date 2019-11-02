#include "Pojazd.h"





void Pojazd::Przebieg(int licznik) {
 		m_licznik = licznik;
}


Pojazd::Pojazd(const Pojazd& sam){
 		m_kola = sam.m_kola;
 		this->m_licznik = 0.0;
 		m_kolor = sam.m_kolor;
 		m_silnik = sam.m_silnik;
 	}

Pojazd& Pojazd::operator =(const Pojazd& sam){
 		m_kola = sam.m_kola;
 		this->m_licznik = 0.0;
 		m_kolor = sam.m_kolor;
 		m_silnik = sam.m_silnik;
 		return *this;
}

float Pojazd::get_licznik() const  {
		return m_licznik;
}
std::string Pojazd::get_kolor() const{
		return m_kolor;
}


int Pojazd::get_kola() const{
		return m_kola;
	
}

