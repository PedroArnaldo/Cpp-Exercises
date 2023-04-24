#include "include/Contact.hpp"
#include "include/PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

void optionPhoneBook(std::string buffer, PhoneBook& phoneBook)
{
	if (buffer == "SEARCH")
		phoneBook.searchContact();
	else if (buffer == "ADD")
		phoneBook.addContact();
}

void printMenu(void)
{
	std::cout << "Enter:" << std::endl << " ADD | SEARCH | EXIT" << std::endl;
}

int main(void)
{
	PhoneBook phoneBook;
	std::string buffer;

	printMenu();
	while (42)
	{
		std::cout << "> ";
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			break;
		else if (buffer == "EXIT")
			exit(0);
		optionPhoneBook(buffer, phoneBook);
	}
	return (0);
}
