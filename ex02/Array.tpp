#include "Array.hpp"

template <class T>
Array<T>::Array(){
	this->_array = NULL;
}

template <class T>
Array<T>::Array(unsigned int n){
	this->_array = new T[i];
}