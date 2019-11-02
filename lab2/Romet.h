#pragma once
#include "Motorower.h"

class Romet : public Motorower{

 public:
 	Romet(){

 	}
 	Romet(Silnik silnik,float licznik) : Motorower(silnik,"czerwony metalic", licznik) {

 	}

 private:

};
