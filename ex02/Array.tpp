#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	this->_size = 0;
	this->_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n){
	this->_size = n;
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T>& other){
	if (this != &other){
		this->_array = new T[other._size];
		for (int i = 0; i < (int)other._size; i++){
			this->_array[i] = other._array[i];
		}
		this->_size = other._size;
	}
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &other) {
	if (this != &other) {
		delete[] this->_array;
		this->_array = new T[other._size];
		for (int i = 0;i < (int)other._size; i++)
			this->_array[i] = other._array[i];
		this->_size = other._size;
	}
	return *this;
}

template <typename T>
const char* Array<T>::ArrayOutOfBoundException::what() const throw(){
	return "Can't access this index <error: out of bound>\n";
}

template <typename T>
Array<T>::~Array(){
	delete [] this->_array;
}

template <typename T>
size_t Array<T>::size(void) const{
	return this->_size;
}

template <typename T>
T &Array<T>::operator[](int i){
	if (i >= (int)this->_size){
		throw Array::ArrayOutOfBoundException();
	}
	return (this->_array[i]);
}