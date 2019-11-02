#include "Furniture.h"


Furniture::Furniture(int a) : Product(a){

}

void Furniture::Sit(){
	std::cout<<"You sit down on a chair. Nothing happens."<<std::endl;
}
void Furniture::Print() const{
	std::cout<<"This is chair with ID="<<Product::Id()<<std::endl;
}

void Furniture::SetPrice(const int price){
	Product::SetPrice(price);

}
