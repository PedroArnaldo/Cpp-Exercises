#include <iostream>
#include <fstream>
#include <sstream>

std::string replaceWords(const std::string& text, const std::string& targetWord, const std::string& wordReplacement)
{
	std::istringstream iss(text);
    std::ostringstream oss;
    std::string word;

    while (iss >> word) {
        if (word == targetWord) {
            oss << wordReplacement << " ";
        } else {
            oss << word << " ";
        }
    }
    return oss.str();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid parameter." << std::endl;
		return (1);
	}
	/*Receba os parâmetros e atribua as variável*/
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	/*Abrir um arquivo*/
	std::ifstream file;
	std::fstream newfile;

	file.open(fileName.c_str());
	if (file.is_open())
	{
		/*Copiar esse arquivo para variavel*/
		if (file.peek() == std::ifstream::traits_type::eof())
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
		newfile.open("text_cpy.txt", std::fstream::out);
		while (getline(file, line))
		{
			/*Substituir ocorrência de s1 por s2*/
			line = replaceWords(line, s1, s2);
			newfile << line << std::endl;
		}
		file.close();
	}
	else
		std::cout << "The file could not be open." << std::endl;
	return (0);
}
