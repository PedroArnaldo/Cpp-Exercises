#include "RPN.hpp"

RPN::RPN(void) :
	_operation("deafult"),
	_result(0)
{
}

RPN::RPN(std::string operation) :
	_operation(operation),
	_result(0)
{		
}

RPN::RPN(const RPN &cpy) :
	_operation(cpy._operation),
	_result(cpy._result)
{
}

RPN::~RPN()
{
}

RPN& RPN::operator=(const RPN &src)
{
	//if (src != NULL)
	
		this->_operation = src._operation;
		this->_result = src._result;
	

	return *this;
}