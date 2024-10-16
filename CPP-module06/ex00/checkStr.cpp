#include "ScalarConverter.hpp"

bool	isZero(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] != '0')
			return (false);
	return (true);
}

std::string	strtrim(const std::string& str, const std::string& chars)
{
	if (isZero(str))
		return ("0");
	size_t	start = str.find_first_not_of(chars);
	size_t	end = str.find_last_not_of(chars);
	if (start == std::string::npos || end == std::string::npos)
		return ("");
	return (str.substr(start, end - start + 1));
}

bool	checkSign(const std::string& str)
{
	size_t	plusSign = str.find('+');
	size_t	minusSign = str.find('-');
	if ((plusSign != std::string::npos && plusSign) || (minusSign != std::string::npos && minusSign))
		return (true);
	return (false);
}

void	parseStr(std::string& str)
{
	int			c = 0;
	int			f = 0;
	int			dot = 0;
	std::string	input[8] = {"inf", "-inf", "+inf", "inff", "-inff", "+inff", "nan", "nanf"};

	for (int i = 0; i < 8; i++)
		if (!str.compare(input[i]))
			return ;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			dot++;
		if (dot > 1 || (str[i] == '.' && (i == 0 || !str[i + 1] \
			|| !std::isdigit(str[i + 1]) || !std::isdigit(str[i - 1]))) \
			|| ((str[i] == '+' || str[i] == '-') && (i != 0 || !std::isdigit(str[i + 1]))) \
			|| (str[i] != '+' && str[i] != '-' && str[i] != '.' && !std::isalnum(str[i])) \
			|| (str[i] == 'f' && i != str.length() - 1))
			throw ScalarConverter::InvalidInputException("ScalarConverter: Invalid character!");
		if (str[i] == 'f')
			f = 1;
		if (std::isalpha(str[i]))
			c++;
	}
	if (c && !f && str.length() > 1)
		throw ScalarConverter::InvalidInputException("ScalarConverter: Invalid input!");
}

bool	toIntOverflowCheck(const std::string& str, int& num)
{
	int	i = 0;
	int	nbr = 0;
	int	sign = 1;

	if (!str.compare("-2147483648"))
	{
		num = -2147483648;
		return (false);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		nbr = num;
		num = (num * 10) + (str[i] - 48);
		if (nbr > num)
			return (true);
		i++;
	}
	num = num * sign;
	return (false);
}

void	displayOutput(std::string& str)
{
	if (str.find('n') != std::string::npos)
	{
		std::cout << "Char: Impossible" << std::endl << "Int: Impossible" << std ::endl;
		std::cout << "Float: " << str;
		if (str.compare("nanf") && (str.find('f') == std::string::npos || str.find('f') == str.length() - 1))
			std::cout << "f";
		std::cout << std::endl;
		std::cout << "Double: ";
		if (str.compare("inf") && str.compare("+inf") && str.compare("-inf") && str[str.length() - 1] == 'f')
			std::cout << str.erase(str.length() - 1) << std::endl;
		else
			std::cout << str << std::endl;
	}
	else
	{
		int		num = 0;
		double	dnum = atof(str.c_str());
		int		overflow = toIntOverflowCheck(str, num);
		if ((str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122))
		{
			num = str[0];
			dnum = str[0];
		}
		if (num >= -128 && num < 32)
			std::cout << "Char: Non displayable character";
		else if (num < -128 || num > 127)
			std::cout << "Char: Overflow";
		else
			std::cout << "Char: " << static_cast<char>(num);
		std::cout << std::endl;
		if (overflow)
			std::cout << "Int: Overflow";
		else
			std::cout << "Int: " << num;
		std::cout << std::endl;
		std::cout << "Float: ";
		if (dnum > __FLT_MAX__ && dnum < __FLT_MIN__)
			std::cout << "Impossible";
		std::cout << static_cast<float>(dnum);
		if (dnum == static_cast<int>(dnum) \
			&& (str.find(".") == std::string::npos || str.find(".0") != std::string::npos))
			std::cout << ".0";
		std::cout << "f";
		std::cout << std::endl;
		std::cout << "Double: " << dnum;
		if (dnum == static_cast<int>(dnum) \
			&& (str.find(".") == std::string::npos || str.find(".0") != std::string::npos))
			std::cout << ".0";
		std::cout << std::endl;
	}
}
