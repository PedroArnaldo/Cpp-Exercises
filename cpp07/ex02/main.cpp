#include "Array.hpp"
#include <iostream>

int main(void)
{
	try
	{
		std::cout << "##########  Teste Array int ##########" << std::endl;
		Array<int> arrayInt(5);
		int array[5];

		for (size_t i = 0; i < 5; i++)
		{
			arrayInt[i] = i + 1;
			array[i] = i + 1;
		}
		
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << "My array: " << arrayInt[i] << std::endl;
			std::cout << "Primitive Data Type: " << array[i] << std::endl;

		}
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		std::cout << "##########  Teste Array String ##########" << std::endl;
		Array<std::string> arrayInt(5);
		std::string array[5];

		for (size_t i = 0; i < 5; i++)
		{
			arrayInt[i] = "String ";
			array[i] = "String ";
		}
		
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << "My array: " << arrayInt[i] << " " << i << std::endl;
			std::cout << "Primitive Data Type: " << array[i] << " " << i << std::endl;

		}
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "##########  Teste Array Float ##########" << std::endl;
		Array<float> arrayInt(5);
		float array[5];

		for (size_t i = 0; i < 5; i++)
		{
			arrayInt[i] = i + 0.2;
			array[i] = i + 0.2;
		}
		
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << "My array: " << arrayInt[i] << std::endl;
			std::cout << "Primitive Data Type: " << array[i] << std::endl;

		}
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
