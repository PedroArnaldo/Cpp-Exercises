#ifndef RPN_HPP
#define RPN_HPP

#include <stack>

class RPN{

	private:

	public:
		RPN(void);
		RPN(std::string operation);
		RPN(const RPN &cpy);
		~RPN(void);
		
		RPN& operation=(const RPN &src);
		
			
}

#endif
