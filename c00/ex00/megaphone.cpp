#include <iostream>
#include <cstring>

void	to_upper(char **argv)
{
	for (size_t word = 1; argv[word]; word++)
	{
		for(size_t letter = 0; letter < strlen(argv[word]); letter++)
			std::cout << (char) toupper(argv[word][letter]);
	}
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	to_upper(argv);
	return (0);
}
