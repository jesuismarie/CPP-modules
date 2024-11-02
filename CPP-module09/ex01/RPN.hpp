#ifndef _RPN_HPP_
# define _RPN_HPP_

# include <iostream>
# include <cstring>
# include <stack>

# define TOKENS "+-*/"

class RPN
{
	private:
		std::stack<float>	stack;
	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();
		const RPN&	operator=(const RPN& other);
		bool		isValidExpression(const std::string& expr);
		float		calculate(std::string& expr);
		class InvalidExpression : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class DivisionByZero : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

#endif
