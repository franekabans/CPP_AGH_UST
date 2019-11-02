#include "Car.h"

Car::Car(int a,const int b) :  Vehicle(a) , m_passengers(new long[b]){

}


void Car::SetPrice(const int price){
	Product::SetPrice(price);
	std::cout<<"The car price will be: "<<price<<std::endl;
}

void Car::SetMaxSpeed(const int max) {
	Vehicle::SetMaxSpeed(max);
}

void Car::Drive() const{
	std::cout<<"Driving Car with ID="<<this->Product::Id()<<std::endl;
}

void Car::Print() const{
	int hehe = sizeof(m_passengers)/sizeof(int)*2;
	std::cout <<"Car with ID="<<Product::Id()<<" has "<< hehe <<" passengers with following Ids: ";
	for(unsigned int i =0 ;i<(sizeof(m_passengers)/sizeof(int)*2);i++){
		std::cout<<m_passengers[i];
		if(i!=(sizeof(m_passengers)/sizeof(int)*2)-1)
			std::cout<<" ,";
	}
	std::cout<<". ";
	std::cout<<"Max speed of the car is "<<Vehicle::Max()<<std::endl;

}

void Car::SetPassengersIds(const int* a,int b){
	for(int i =0;i<b;i++){
		m_passengers[i] = a[i];
	}

}


Car::~Car(){
	delete [] m_passengers;
}


void Car::Move() const{
	Drive();
}



