#ifndef _BITCOINEXCHANGE_HPP_
# define _BITCOINEXCHANGE_HPP_

# include <iostream>
# include <iterator>
# include <fstream>
# include <sstream>
# include <string>
# include <map>

class BitcoinExchange
{
	typedef std::map<std::string, float>::iterator	iter;
	private:
		std::map<std::string, float>	database;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		~BitcoinExchange();
		const BitcoinExchange&	operator=(const BitcoinExchange& other);
		void					initDatabase(std::string filename);
		void					exchangePrintRate(std::string filename);
		float					ft_stof(const std::string& value);
		int						ft_stoi(const std::string& value);
		bool					isValidDate(const std::string& date);
		bool					isValidValue(const std::string& strVal);
		float					getClosestBitcoinExchangeRate(const std::string& date);

		class FileReadException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

#endif
