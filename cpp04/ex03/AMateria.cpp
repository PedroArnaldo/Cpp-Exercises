#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) :  _type(type)
{
}

AMateria::AMateria(const AMateria& src)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const& src)
{
	return *this;
}

std::string const &AMateria::getType() const
{
	return (_type);
}
