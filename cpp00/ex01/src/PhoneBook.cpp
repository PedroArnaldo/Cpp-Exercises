#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor" << std::endl;
	this->_totalContacts = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook destructor" << std::endl;
	return ;
}

void PhoneBook::addContact(void)
{
	int	id;
	std::string buffer;

	id = this->_totalContacts;
	while (buffer.empty()) 
	{
		std::cout << "Insert first name: ";
		std::getline (std::cin, buffer);
		_contacts[id].setFirstName(buffer);
	}
	buffer.clear();
	while (buffer.empty()) 
	{
		std::cout << "Insert last name: ";
		std::getline (std::cin, buffer);
		_contacts[id].setFirstName(buffer);
	}
	buffer.clear();
	while (buffer.empty()) 
	{
		std::cout << "Insert nickname: ";
		std::getline (std::cin, buffer);
		_contacts[id].setFirstName(buffer);
	}
	this->_totalContacts++;
	return ;
}

void PhoneBook::searchContact(void)
{
	std::cout << std::setw(10) << "Index";
	std::cout << " | ";
	std::cout << std::setw(10) << "First Name";
	std::cout << " | ";
	std::cout << std::setw(10) << "Last Name";
	std::cout << " | ";
	std::cout << std::setw(10) << "Nick Name" << std::endl;

	std::cout << _contacts[0].getFirstName() << std::endl;
}

void PhoneBook::exit(void)
{
	return ;
}


