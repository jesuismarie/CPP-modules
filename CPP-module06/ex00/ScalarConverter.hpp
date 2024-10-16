#ifndef _SCALARCONVERTER_HPP_
# define _SCALARCONVERTER_HPP_

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <climits>
# include <limits>

class ScalarConverter
{
	private:
		ScalarConverter(void);
		~ScalarConverter();
	public:
		static void	convert(const std::string& str);
		class InvalidInputException : public std::exception
		{
			private:
				const char*	_err;
			public:
				InvalidInputException(const char* err);
				const char*	what() const throw();
		};
};

bool		isZero(const std::string& str);
std::string	strtrim(const std::string& str, const std::string& chars);
bool		checkSign(const std::string& str);
void		parseStr(std::string& str);
bool		toIntOverflowCheck(const std::string& nbr);
void		displayOutput(std::string& str);

#endif
