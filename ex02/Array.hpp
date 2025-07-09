#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <exception>

template <typename T>
class Array {
	private:
	int unsigned _size;
	T *_array;
	public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array &operator=(Array &other);
	~Array();
	size_t	size(void) const;
	T	&operator[](int i);
	class ArrayOutOfBoundException : public std::exception{
		public:
		const char* what() const throw();
	};
};

#include "Array.tpp"

#endif