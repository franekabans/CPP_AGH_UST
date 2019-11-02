#include "Vehicle.h"

Vehicle::Vehicle(int a) : Product(a){

}

void Vehicle::SetPrice(const int price){
	Product::SetPrice(price);
	std::cout<<price <<"is the new cost of the vehicle"<<std::endl;
}


void Vehicle::SetMaxSpeed(const int max) {
	m_maxspeed = max;
}

void Vehicle::Print() const{
	std::cout<< "This is vehicle with max speed of "<< m_maxspeed<<std::endl;
}

int Vehicle::Max() const{
	return m_maxspeed;
}

void Vehicle::Move() const{
	std::cout<<"Moving with speed "<<m_maxspeed<<std::endl;
}


Vehicle::~Vehicle(){
	
}



