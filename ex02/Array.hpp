#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
	private:
		// int unsigned _size;
		T *_array;
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& other);
		Array<T>& operator=(const Array<T>& other);
		~Array<T>();
		class ArrayOutOfBoundException : public std::exception{
			char* const what() const throw();
		}
};

#endif