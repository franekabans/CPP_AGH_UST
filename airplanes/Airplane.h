#pragma once
#include "Vehicle.h"

class Airplane : public Vehicle{

 public:
 	Airplane(int a);
 	void SetPrice (const int b);    					// The plane price is changed
    void SetWingspan(const int wing);
    void Fly() const;        						// Flying the airplane with ID=15
  	void Print()const ;
  	void Move() const;        					// A vehicle with ID=15 is an airplane with max speed of 100 and wignspan 42
      
    ~Airplane(){
    	
    }

 private:
 	int m_wingsspan;
};
