#pragma once
#include <iostream>
//template class Matrix stands for 2D array
template <typename T,unsigned x,unsigned y>
class Matrix{
	//operator overloaded needed for couting
	friend std::ostream& operator<<(std::ostream& out,const Matrix<T,x,y> obj){
		for( unsigned i= 0;i < y;i++){
 			for(unsigned j =0;j < x;j++){
 				out << obj.m_matrix[j][i]<<" ";
 		}std::cout<<std::endl;
 		}
		return out;
	}
 public:
 	//constructor
 	Matrix();
 	//templated method in templated class
 	template<unsigned a,unsigned b>
 	T& at();
 	//typename U needed for conversion for example doubles to ints etc. .x and y in both classes used in summary,should be the same
 	template<typename U>
 	void add(Matrix<U,x,y>& tobeadded);

 	//reseting all the values in matrix
 	void reset(T restart);
 	// method needed in add() method . its a getter
 	T get_them(unsigned i,unsigned j)const;


 private:
 	//class variables
 	// unsigned m_x;
 	// unsigned m_y;
  	T m_matrix[x][y];

};

template <typename T,unsigned x,unsigned y>
Matrix<T,x,y>::Matrix() {
	for(unsigned i= 0;i < x;i++){
 		for(unsigned j =0;j < y;j++)
 			m_matrix[i][j] = 0;
 		}
}

template <typename T,unsigned x,unsigned y>
template<unsigned a,unsigned b>
T& Matrix<T,x,y>::at(){
 		return m_matrix[a][b];
}

template <typename T,unsigned x,unsigned y>
template<typename U>
void Matrix<T,x,y>::add(Matrix<U,x,y>& tobeadded){
 	for(unsigned i= 0;i < x;i++){
 		for(unsigned j =0;j < y;j++)
			m_matrix[i][j] += (T)tobeadded.get_them(i,j);
	}
}


template <typename T,unsigned x,unsigned y>
void Matrix<T,x,y>::reset(T restart){
	for(unsigned i= 0;i < x;i++){
		for(unsigned j =0;j < y;j++)
			m_matrix[i][j] = restart;
	}
}
template <typename T,unsigned x,unsigned y>
T Matrix<T,x,y>::get_them(unsigned i,unsigned j)const{
 		return m_matrix[i][j];
 	}




