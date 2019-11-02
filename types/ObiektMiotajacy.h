#pragma once
#include "typ1.h"
#include "typ2.h"

class ObiektMiotajacy{

 public:
 	void Rzuc(){
 		delete this;
 		throw m_typ;
 	}

 private:
 	typ1* m_typ;
 //	typ2* m_typ2;

};
