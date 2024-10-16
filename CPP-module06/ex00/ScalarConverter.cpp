#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::InvalidInputException::InvalidInputException(const char* err): _err(err) {}

const char*	ScalarConverter::InvalidInputException::what() const throw()
{
	return (this->_err);
}

void	ScalarConverter::convert(const std::string& str)
{
	if (!str[0])
		throw ScalarConverter::InvalidInputException("ScalarConvertor: Empty input!");
	std::string	trimmed = strtrim(str, " \t\n");
	if (checkSign(str) || strchr(trimmed.c_str(), ' ') || strchr(trimmed.c_str(), '\n') || strchr(trimmed.c_str(), '\t'))
		throw ScalarConverter::InvalidInputException("ScalarConverter: Invalid character!");
	parseStr(trimmed);
	displayOutput(trimmed);
}
