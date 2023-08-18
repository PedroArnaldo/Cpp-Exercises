#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
#include <climits>
#include <cstdlib>
#include <iomanip>
#include <cctype>

class ScalarConverter{

	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter& operator=(ScalarConverter const &src);

		void	static toChar(const std::string &value);
		void	static toInt(const std::string &value);
		void	static toFloat(const std::string &value);
		void	static toDouble(const std::string &value);
		void	static toSpecialValues(const std::string &value);

		bool	static isChar(const std::string &value);
		bool	static isInt(const std::string &value);
		bool	static isFloat(const std::string &value);
		bool	static isDouble(const std::string &value);
		bool	static isNum(const std::string &value);
		bool	static isSpecialValues(const std::string &value);

	
	public:
		void	static convert(const std::string &literal);
};

#endif

