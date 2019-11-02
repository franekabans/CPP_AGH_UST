#pragma once
#include <string>
#include <iostream>

class Pomieszczenie{

 public:
 	Pomieszczenie(std::string str) : m_nazwa(str){
 		std::cout<< "Tworze pomieszczenie: "<<str<<std::endl;

 	}

 	template <typename U>
 	void wstaw(U something){
 		std::cout<<"Wstawiam "<<something<<" do pomieszczenia: "<<m_nazwa<<std::endl;
 	}

 	void zetrzyj_kurze() const{
 		std::cout<<"Scieram kurze w pomieszczeniu: "<<m_nazwa<<std::endl;
 	}

 	void odkurz() const {
 		std::cout<<"Odkurzam w pomieszczeniu: "<<m_nazwa<<std::endl;
 	}

 	void umyj_podloge() const{
 		std::cout<<"Myje podloge w pomieszczeniu: "<<m_nazwa<<std::endl;
 	}
 	std::string get_name()const {
 		return m_nazwa;
 	}

 private:
 	std::string m_nazwa;

};



template <void (Pomieszczenie::*f)() const>
void Lokaj(Pomieszczenie& pom){
	(pom.*f)();
}


template <void (Pomieszczenie::*pt2ConstMember)() const >
void Lokaj(const Pomieszczenie& pom) {
	 std::cout<<"Pomieszczenie "<<pom.get_name()<<"jest zamknięte."<<std::endl;
}


template <int T = 0>
void Lokaj(Pomieszczenie& pom) {
	std::cout<<"Nic nie robie"<<std::endl;
}

