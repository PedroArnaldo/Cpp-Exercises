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

		void	static toChar(double value);
		void	static toInt(double value);
		void	static toFloat(double value);
		void	static toDouble(double value);
		void	static printString(const std::string &value);
		void	static printExtremeValues(void);

		bool	static isNum(const std::string &value);
		bool	static isValid(const std::string &value);
		bool	static isExtremeValues(const std::string &value);

	public:
		void	static convert(const std::string &literal);
};

#endif

