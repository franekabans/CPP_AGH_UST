#include "OutOfRange.h"
#include "Factory.h"

OutOfRange::OutOfRange(Value * val,Factory * fact) : m_val(val) , m_fact(fact){

}
 		

 std::ostream& operator <<(std::ostream& out, const OutOfRange& val){
 		//*m_err = val;
 		out<<"Value named: "<< val.m_val->get_str() <<" has value "<< val.m_val->get_val() <<"  is outside of the allowed range: ["<<val.m_fact->get_down()<<","<<val.m_fact->get_up()<<"]";
 		return out;
}



void OutOfRange::CleanFactory(){
 		delete m_fact;
 		m_fact = nullptr;
}



