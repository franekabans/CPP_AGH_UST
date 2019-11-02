#include "Airplane.h"



Airplane::Airplane(int a) : Vehicle(a){
	Vehicle::SetMaxSpeed(100);
}





void Airplane::SetPrice (const int b){
	Product::SetPrice(b);
	std::cout<<"The plane price is changed"<<std::endl;
}
void Airplane::SetWingspan(const int wing){
	m_wingsspan = wing;
}
void Airplane::Fly() const{
	std::cout<<"Flying the airplane with ID="<<Product::Id()<<std::endl;
}
void Airplane::Print() const{
	std::cout<<"A vehicle with ID="<<Product::Id()<<"is an airplane with max speed of "<<Vehicle::Max()<<" and wingspan "<<m_wingsspan<<std::endl;
}

void Airplane::Move() const{
	Fly();
}

