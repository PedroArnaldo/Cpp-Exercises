//#include "RPN.hpp"
#include <bits/stdc++.h>
/*float calculate(std::string operation)
{
	int startIndex;
	int endIndex;
	
	for (int i = 0; i < operation.length(); i++){
		int
	}
}*/

#include <stack>
#include <string>
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	(void) argc;
	std::string mystr(argv[1]);
	std::string arraystr[5];
	std::cout << mystr << std::endl;
	std::stringstream split(mystr);
	std::string word;
	int i = 0;
	while (split >> word){
		std::cout << word << std::endl;
		arraystr[i] = word;
		i++;
	}


	std::stack<float> result;
	float calResult = 0;
	i = 0;
	while (i < 4)
	{
		if (std::isdigit(arraystr[i].c_str()[0]))
			result.push(std::atof(arraystr[i].c_str()));
		if (arraystr[i] == "+")
		{
			int nbr1 = result.top();
				result.pop();
			int nbr2 = result.top();
				result.pop();
			calResult += nbr1 + nbr2;
			result.push(calResult);
		}
		
		i++;
	}

	std::cout << "resutl: " << result.top() << std::endl;
	return (0);
}
