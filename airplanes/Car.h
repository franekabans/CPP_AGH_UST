#pragma once
#include "Vehicle.h"

class Car : public Vehicle{

 public:
 	Car (int a,const int b);
 	void SetPrice(const int price);
 	void Drive() const;
 	void Print() const;
 	void SetMaxSpeed(const int max) ;
 	void SetPassengersIds(const int* a,int b);
 	void Move() const;

 	~Car();

 private:
 	long int* m_passengers;
};
