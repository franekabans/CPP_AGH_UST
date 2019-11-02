#pragma once
#include "Pojazd.h"


class Samochod : public Pojazd{

 public:
 	Samochod(){

}

Samochod(Silnik silnik,std::string kolor,float licznik, int kola = 4 ): Pojazd(silnik,kolor,licznik, kola){

}



 private:
 

};
