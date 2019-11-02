#pragma once
#include "Samochod.h"

class Mercedes : public Samochod{

 public:
 	Mercedes(){

 	}
 	Mercedes(Silnik silnik,float licznik) : Samochod(silnik,"czarny metalic", licznik) {

 	}

 	
 private:

};
