#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

const RPN&	RPN::operator=(const RPN& other)
{
	this->stack = other.stack;
	return (*this);
}

const char*	RPN::InvalidExpression::what() const throw()
{
	return ("ERROR: Invalid expression.");
}

const char*	RPN::DivisionByZero::what() const throw()
{
	return ("ERROR: Division by zero.");
}

bool	RPN::isValidExpression(const std::string& expr)
{
	int	n = 0;
	int	op = 0;

	if (expr.empty())
		return (false);
	for (size_t i = 0; i < expr.size(); i++)
	{
		if (expr[i] == ' ')
			continue ;
		if (isdigit(expr[i]) && i + 1 != expr.size() && (expr[i + 1] == ' ' || strchr(TOKENS, expr[i + 1])))
			n++;
		else if (strchr(TOKENS, expr[i]))
		{
			if (i + 1 != expr.size() && !(isdigit(expr[i + 1]) || expr[i + 1] == ' '))
				return (false);
			op++;
		}
		else
			return (false);
	}
	if (op != n - 1)
		return (false);
	return (true);
}

float	RPN::calculate(std::string& expr)
{
	if (!isValidExpression(expr))
		throw RPN::InvalidExpression();
	for (size_t i = 0; i < expr.size(); i++)
	{
		if (expr[i] == ' ')
			continue ;
		if (std::isdigit(expr[i]))
			this->stack.push(expr[i] - '0');
		else
		{
			float	right = this->stack.top();
			this->stack.pop();
			float	left = this->stack.top();
			this->stack.pop();
			switch (expr[i])
			{
				case '+':
					this->stack.push(left + right);
					break;
				case '-':
					this->stack.push(left - right);
					break;
				case '*':
					this->stack.push(left * right);
					break;
				case '/':
					if (right == 0)
						throw RPN::DivisionByZero();
					this->stack.push(left / right);
					break;
			}
		}
	}
	return (this->stack.top());
}
