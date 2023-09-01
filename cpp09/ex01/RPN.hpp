#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>     /* atof */

class RPN {

	private:
		std::string _operation;
		float _result;
 
	public:
		RPN(void);
		RPN(std::string operation);
		RPN(const RPN &cpy);
		~RPN(void);

		RPN& operator=(const RPN &src);

		bool calculate(std::stack<float> &stack, char op);
		bool isValid(std::string operation);
		bool executor(void);
		bool isOperation(char operation);
};

#endif
