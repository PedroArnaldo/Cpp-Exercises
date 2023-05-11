#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc == 1 && argc > 3)
		std::cout << "Invalid" << std::endl;
	/*Receba os parâmetros e atribua as variável*/
	std::string fileName = argv[1];
	std::string s1;
	std::string s2;
	std::string line;
	int i = 0;
	/*Abrir um arquivo*/
	std::ifstream file;
	file.open(fileName.c_str());
	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
		line.erase(0);
		i++;
	}
	/*Copiar esse arquivo para variavel*/
	/*Substituir ocorrência de s1 por s2*/
	/*Lidar com entradas inesperadas e erros*/
	return (0);
}
