#include "include/Contact.hpp"
#include <iostream>

int main(void)
{
	Contact contact;

	contact.setFirstName("Pedro");

	std::cout << contact.getFirstName() << std::endl;

	return (0);
}
