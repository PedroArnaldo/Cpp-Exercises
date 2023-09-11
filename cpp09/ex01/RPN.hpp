#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#include <stdlib.h>  
#include <sstream>
#include <cctype>

class RPN {

	private:
		std::string _operation;
		int _result;
 
	public:
		RPN(void);
		RPN(std::string operation);
		RPN(const RPN &cpy);
		~RPN(void);

		RPN& operator=(const RPN &src);

		bool calculate(std::stack<float> &stack, char op);
		bool executor(void);
		bool isValid(void);
		bool isOperation(char operation);
		int getResult(void);
};

#endif
