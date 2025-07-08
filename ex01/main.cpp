#include <iostream>
#include <string>
#include "iter.hpp"

void printInt(int const& x) {
	std::cout << x << "\n";
}

template<typename T>
void printTemplate(T const& x) {
	std::cout << x << "\n";
}

struct Data {
	int value;
	Data(int v) : value(v) {}
};

std::ostream& operator<<(std::ostream& os, Data const& d) {
	os << "Data(" << d.value << ")";
	return os;
}

int main() {
	int intArray[5] = {1, 2, 3, 4, 5};
	char charArray[3] = {'a', 'b', 'c'};
	Data dataArray[2] = { Data(10), Data(20) };

	iter(intArray, 5, printInt);

	iter(charArray, 3, printTemplate);
	iter(dataArray, 2, printTemplate);

	return 0;
}