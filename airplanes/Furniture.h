#pragma once
#include "Product.h"

class Furniture : public Product{
 public:
 	Furniture(int a);
 	void Sit();
 	void Print() const;
 	void SetPrice(const int price);

 private:

};
