#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>

class RPN {

	private:
		std::string _operation;
		float _result;
 
	public:
		RPN(void);
		RPN(std::string _operation);
		RPN(const RPN &cpy);
		~RPN(void);

		RPN& operator=(const RPN &src);

		bool Calculate(std::string _operation);
		bool isValid(std::string _operation);
		bool executor(void);
};

#endif
