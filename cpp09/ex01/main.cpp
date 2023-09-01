#include "RPN.hpp"

int main(int argc, char **argv)
{
	if(argc == 2){
		RPN rpn(argv[1]);
		if(!rpn.executor())
			std::cout << "Error";
	} else
		std::cout << "Error" << std::endl;
	return (0);
}
