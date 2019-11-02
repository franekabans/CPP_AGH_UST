#pragma once
#include "Silnik.h"



class Pojazd{
	friend std::ostream& operator <<(std::ostream& out,const Pojazd& obj){
		out<<std::endl;
		out << "Liczba kol "<<obj.get_kola()<<std::endl;
		out << "Stan Licznika "<<obj.get_licznik()<<" [km]"<<std::endl;
		out << "Kolor "<<obj.get_kolor()<<std::endl;

		return out;
	}
 public:
 	Pojazd(){

 	}
 	
 	Pojazd(Silnik silnik,std::string kolor,float licznik, int kola = 4 ): m_silnik(silnik) , m_kolor(kolor) , m_licznik(licznik) , m_kola(kola){

	}

	int get_kola() const;

	float get_licznik() const;

	std::string get_kolor() const;

	void Przebieg(int licznik);

 	Pojazd(const Pojazd& sam);

 	Pojazd& operator =(const Pojazd& sam);

 private:
 	Silnik m_silnik;
 	std::string m_kolor;
 	float m_licznik;
 	int m_kola;

 

};
