#include <iostream>
#include <cctype>

using namespace std;

void	to_upper(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		for(char c : argv[i])
			cout << toupper(c);
	}
}

int	main(int argc, char **argv)
{
	cout << "Hello World!";
	return (0);
}
