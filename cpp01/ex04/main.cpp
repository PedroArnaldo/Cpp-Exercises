#include <iostream>
#include <fstream>
#include <sstream>

void replace(std::string& line, const std::string& search, const std::string& replace) 
{
    size_t pos = 0;

    while ((pos = line.find(search, pos)) != std::string::npos) 
	{
        line = line.substr(0, pos) + replace + line.substr(pos + search.length());
        pos += replace.length();
    }
}
	

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid parameter." << std::endl;
		return (1);
	}
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	std::ifstream file;
	std::fstream newfile;
	std::string str = ".replace";
	std::string newFileName = fileName + str;

	file.open(fileName.c_str());
	if (file.is_open())
	{
		if (file.peek() == std::ifstream::traits_type::eof())
		{
			std::cout << "Error" << std::endl;
			return (1);
		}
		newfile.open(newFileName, std::fstream::out);
		while (getline(file, line))
		{
			replace(line, s1, s2);
			newfile << line << std::endl;
		}
		file.close();
	}
	else
		std::cout << "The file could not be open." << std::endl;
	return (0);
}
