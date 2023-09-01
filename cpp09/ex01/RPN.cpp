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

RPN::~RPN(void)
{
}

RPN& RPN::operator=(const RPN &src)
{
	if (this != &src)
	{
		this->_operation = src._operation;
		this->_result = src._result;
	}
	return *this;
}

bool RPN::calculate(std::stack<float> &stack, char op)
{
	float n1 = stack.top();
	stack.pop();
	float n2 = stack.top();
	stack.pop();

	if (op == '+')
	{
		_result = n1 + n2;
		stack.push(_result);
		return true;
	}
	else if (op == '-')
	{
		_result = n2 - n1;
		stack.push(_result);
		return true;
	}
	else if (op == '*')
	{
		_result = n1 * n2;
		stack.push(_result);
		return true;
	}
	else if (op == '/')
	{
		_result = n2 / n1;
		stack.push(_result);
		return true;
	}

	return false;
}

bool RPN::executor(void)
{
	std::stack<float> myStack;

	for (size_t i = 0; i < _operation.size(); i++)
	{
		if(isOperation(_operation[i]) && myStack.size() >= 2)
			calculate(myStack, _operation[i]);
		if (isdigit(_operation[i]))
		{
			std::string number(1, _operation[i]);
			float value = std::atof(number.c_str());
            myStack.push(value);
		}
	}

	if (myStack.size() == 1)
	{
		_result = myStack.top();
		return true;
	}else
		return false;
	return true;
}

bool RPN::isOperation(char operation)
{
	if (operation == '+')
		return true;
	else if (operation == '-')
		return true;
	else if (operation == '*')
		return true;
	else if (operation == '/')
		return true;
	else
		return false;
}

int RPN::getResult(void){
	return _result;
}