#include <iostream>
#include <string>
#include <exception>
#include "Array.hpp"

int main() {
	// Default construction
	Array<int> empty;
	std::cout << "empty.size() = " << empty.size() << std::endl;

	// Sized construction and element access
	Array<int> nums(5);
	for (unsigned i = 0; i < nums.size(); ++i)
		nums[i] = static_cast<int>(i * 10);

	std::cout << "nums: ";
	for (unsigned i = 0; i < nums.size(); ++i)
		std::cout << nums[i] << ' ';
	std::cout << std::endl;

	// Copy constructor deep-copy check
	Array<int> numsCopy(nums);
	numsCopy[0] = 42;
	std::cout << "nums[0] = " << nums[0]
				<< " | numsCopy[0] = " << numsCopy[0] << std::endl;

	// Assignment operator deep-copy check with strings
	Array<std::string> words(3);
	words[0] = "alpha";
	words[1] = "beta";
	words[2] = "gamma";

	Array<std::string> wordsCopy;
	wordsCopy = words;
	wordsCopy[1] = "BETA";

	std::cout << "words[1] = " << words[1]
				<< " | wordsCopy[1] = " << wordsCopy[1] << std::endl;

	// Out-of-bounds exception test
	try {
		std::cout << nums[nums.size()] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
