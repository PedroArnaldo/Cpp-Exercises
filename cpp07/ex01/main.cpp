#include "iter.hpp"
#include <iostream>

void print(int value){
	std::cout << value << std::endl;
}

void printStr(std::string value){
	std::cout << value << std::endl;
}

int main(void)
{
	int array[4] = {1, 2, 3, 4};
	std::string strs[3] = {"one", "two", "three"};

	std::cout << "int: " << std::endl;
	::iter(array, 4, print);

	std::cout << "string: " << std::endl;
	::iter(strs, 3, printStr);
	return (0);
}

