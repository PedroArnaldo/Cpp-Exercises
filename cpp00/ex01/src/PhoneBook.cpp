#include "../include/PhoneBook.hpp"
#include <stdio.h>

void printTable(void);
std::string truncate(std::string str);

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor" << std::endl;
	this->_totalContacts = 0;
	this->_idContact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::addContact(void)
{
	int	id;
	std::string buffer;

	id = this->_idContact;
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
		_contacts[id].setLastName(buffer);
	}
	buffer.clear();
	while (buffer.empty()) 
	{
		std::cout << "Insert nickname: ";
		std::getline (std::cin, buffer);
		_contacts[id].setNickName(buffer);
	}	
	buffer.clear();
	while (buffer.empty()) 
	{
		std::cout << "Insert Phone number: ";
		std::getline (std::cin, buffer);
		_contacts[id].setPhoneNumber(buffer);
	}
	buffer.clear();
	while (buffer.empty()) 
	{
		std::cout << "Insert Darkest secreat: ";
		std::getline (std::cin, buffer);
		_contacts[id].setDarkestSecret(buffer);
	}
	_contacts[id].setId(id);
	if (_totalContacts <= 7)
		this->_totalContacts++;
	if (_idContact == 7)
		this->_idContact = -1;
	this->_idContact++;	
	
}

void PhoneBook::searchContact(void)
{
	int	i;
	
	printTable();
	i = 0;
	while (i < this->_totalContacts)
	{
		std::cout << std::right << std::setw(10) << _contacts[i].getId() + 1;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << truncate(_contacts[i].getFirstName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << truncate(_contacts[i].getLastName());
		std::cout << "|";
		std::cout << std::right << std::setw(10) << truncate(_contacts[i].getNickName()) << std::endl;
		i++;
	}
	try
	{
		std::string id;
		std::cout << "Enter a contact id: ";
		std::getline(std::cin, id);
		if (std::cin.eof())
			return ;
		searchContactId(atoi(id.c_str()) - 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void PhoneBook::searchContactId(int id)
{
	if (id >= 0 && id <= 7 && !_contacts[id].getFirstName().empty())
	{
		std::cout << std::left << std::setw(10) << "ID: " << _contacts[id].getId() << std::endl;
		std::cout << std::left << std::setw(10) << "Firstname: " << _contacts[id].getFirstName()  << std::endl;
		std::cout << std::left << std::setw(10) << "Lastname: " << _contacts[id].getLastName()  << std::endl;
		std::cout << std::left << std::setw(10) << "Nickname: " << _contacts[id].getNickName() << std::endl;
		std::cout << std::left << std::setw(10) << "Phone number: " << _contacts[id].getPhoneNumber() << std::endl;
		std::cout << std::left << std::setw(10) << "Darkest secreat: " << _contacts[id].getDarkestSecret() << std::endl;
	}
	else
		std::cout << std::right << std::setw(10) << "Sorry this command is not valid." << std::endl;
}

void printTable(void)
{
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right  << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Nick Name" << std::endl;
}

std::string truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}