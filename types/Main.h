#pragma once

#include "typ3.h"
#include "typ4.h"
#include "ObiektMiotajacy.h"



void Przetworz(typ1* typ){
	std::cout<<"Przetworz - wyjatek typu " <<1<<" o adresie: "<<&typ<<std::endl;
	typ4* nowy = new typ4();
	throw nowy;
}

void Przetworz(typ2* typ){
	std::cout<<"Przetworz - wyjatek typu " <<2<<" o adresie: "<<typ<<std::endl;
	throw typ;
}
