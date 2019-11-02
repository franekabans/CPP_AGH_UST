#pragma once

#include "Product.h"

class Vehicle : public Product{

 public:
 	Vehicle(int a);

 	void SetPrice(const int price);               // 1000 is the new cost of the vehicle
    void SetMaxSpeed(const int max);
  	void Print() const;  
  	int Max() const;
    virtual void Move()const ;
  	
  	virtual ~Vehicle();

 private:

  int m_maxspeed;

};
