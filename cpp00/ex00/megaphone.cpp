#include <iostream>
#include <cstring>

void	to_upper(std::string str)
{
	for(size_t letter = 0; letter < str.length(); letter++)
		std::cout << (char) toupper(str[letter]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (size_t word = 1; argv[word]; word++)
			to_upper(argv[word]);
	}
	std::cout << std::endl;
	return (0);
}
