#include "Calc_error.h"


void Calc_error::handler(){
		try{
			throw;
		}catch(std::runtime_error * calc){
			std::cout <<"Zlapano wyjatek:"<<std::endl;
			Calc_error * temp = dynamic_cast<Calc_error *> (calc);
			
			while(temp){

				std::cout << "-- z powodu: "<<temp->what()<<std::endl;
				Calc_error * temp2 = temp;
				temp = dynamic_cast<Calc_error*> (temp->m_err);

				if(temp == nullptr){
					std::cout<<"-- z powodu: "<<temp2->m_err->what()<<std::endl;
					delete temp2->m_err;
				}
								
				delete temp2;
			}
			
		}

 	}
