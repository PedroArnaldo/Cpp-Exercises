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
	if (_totalContacts == 7)
		_totalContacts = 0;
	this->_totalContacts++;
}

void PhoneBook::searchContact(void)
{
	int	i;

	i = 0;
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right  << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Nick Name" << std::endl;
	while (i < this->_totalContacts)
	{
		std::cout << std::setw(10) << std::right << _contacts[i].getId();
		std::cout << "|";
		std::cout << std::setw(10) << std::right  << _contacts[i].getFirstName();
		std::cout << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].getLastName();
		std::cout << "|";
		std::cout << std::setw(10) << std::right << _contacts[i].getNickName() << std::endl;
		i++;
	}
	//fazer um try cat
	searchContactId();
}

void PhoneBook::searchContactId(void)
{
	int id;

	std::cout << "Enter a contact id: ";
	std::cin >> id;
	if (std::cin.eof())
		return ;
	//Fazer um 
	if (id > -1 && id < 8)
	{
		std::cout << std::setw(10) << std::right << _contacts[id].getId();
		std::cout << "|";
		std::cout << std::setw(10) << std::right  << _contacts[id].getFirstName();
		std::cout << "|";
		std::cout << std::setw(10) << std::right << _contacts[id].getLastName();
		std::cout << "|";
		std::cout << std::setw(10) << std::right << _contacts[id].getNickName() << std::endl;
	}
}
