#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

const BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other)
{
	this->database = other.database;
	return (*this);
}

const char*	BitcoinExchange::FileReadException::what() const throw()
{
	return ("ERROR: Cannot read the file.");
}

int	BitcoinExchange::ft_stoi(const std::string& value)
{
	int	i;

	std::stringstream(value) >> i;
	return (i);
}

float	BitcoinExchange::ft_stof(const std::string& value)
{
	float	f;

	std::stringstream(value) >> f;
	return (f);
}

bool	BitcoinExchange::isValidDate(const std::string& date)
{
	int		year = ft_stoi(date.substr(0, 4));
	int		month = ft_stoi(date.substr(5, 2));
	int		day = ft_stoi(date.substr(8, 2));
	int		monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	bool	leapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

	if (leapYear)
		monthDays[1] = 29;
	if (year < 1000 || year > 9999)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > monthDays[month - 1])
		return (false);
	return (true);
}

bool	BitcoinExchange::isValidValue(const std::string& strVal)
{
	int	dot = 0;

	if (strVal.empty() || !strVal.c_str())
		return (false);
	for(size_t i = 1; i < strVal.size(); i++)
	{
		if (strVal[i] == '.')
			dot++;
		else if (!std::isdigit(strVal[i]))
			return (false);
	}
	if (dot > 1)
		return (false);
	return (true);
}

float	BitcoinExchange::getClosestBitcoinExchangeRate(const std::string& date)
{
	iter	closest = database.lower_bound(date);

	if (closest == database.end())
	{
		--closest;
		return (closest->second);
	}
	if (date != closest->first && closest != database.begin())
		--closest;
	return (closest->second);
}

void	BitcoinExchange::initDatabase(std::string filename)
{
	std::ifstream	fileData;
	std::string		line;

	fileData.open(filename.c_str());
	if (fileData.fail() || !fileData.is_open())
		throw BitcoinExchange::FileReadException();
	while (std::getline(fileData, line))
	{
		if (!line.compare("date,exchange_rate"))
			continue ;
		size_t		lim = line.find(',');
		std::string	date = line.substr(0, lim);
		std::string	rate = line.substr(lim + 1);
		database.insert(std::pair<std::string, float>(date, ft_stof(rate)));
	}
	fileData.close();
}

void	BitcoinExchange::exchangePrintRate(std::string filename)
{
	std::ifstream	infile;
	std::string		line;

	infile.open(filename.c_str());
	if (infile.fail() || !infile.is_open())
		throw BitcoinExchange::FileReadException();
	while (std::getline(infile, line))
	{
		if (!line.compare("date | value"))
			continue ;
		size_t	lim = line.find('|');
		if (lim == line.npos || line[4] != '-' || line[7] != '-' || line[10] != ' ')
		{
			std::cout << "ERROR: Bad input." << std::endl;
			continue ;
		}
		std::string	date = line.substr(0, lim - 1);
		std::string	strVal = line.substr(lim + 1);
		if (!isValidValue(strVal))
		{
			std::cout << "ERROR: Invalid value." << std::endl;
			continue ;
		}
		float		value = ft_stof(strVal);
		if (!isValidDate(date))
		{
			std::cout << "ERROR: Invalid date." << std::endl;
			continue ;
		}
		if (value < 0 || value > 1000)
		{
			std::cout << "ERROR: Invalid value." << std::endl;
			continue ;
		}
		float	rate = getClosestBitcoinExchangeRate(date);
		std::cout << date << " => " << value << " = " << rate * value << std::endl;
	}
}
