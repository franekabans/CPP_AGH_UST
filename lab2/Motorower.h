#pragma once
#include "Pojazd.h"

class Motorower : public Pojazd{

 public:
 	Motorower(){

 	}

 	Motorower(Silnik silnik,std::string kolor,float licznik, int kola = 2 ): Pojazd(silnik,kolor,licznik, kola){

}






 private:
 
};
