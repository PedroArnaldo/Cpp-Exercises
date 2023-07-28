#include "Form.hpp"

Form::Form()
{
}

Form::Form(const Form& src)
{
}

Form::~Form()
{
}

Form&	Form::operator=(Form const& rhs)
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSign() const 
{
	return this->_sign;
}

int Form::getGradeSign() const
{
	return this->_gradeSing;
}

int Form::getGradeExecute() const
{
	return this->_gradeExecute;
}

std::ostream& operator<<( std::ostream & o, Form const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

