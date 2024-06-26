#include <iostream>
#include <fstream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

void	replace_str(char **argv, std::string str)
{
	std::ofstream	outfile;
	int				pos;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cout << RED << "Error: Couldn't create file" << RESET << std::endl;
		return ;
	}
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != (int)std::string::npos && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[3]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::string		str;
	char			c;

	if (argc != 4)
	{
		std::cout << GREEN << "Three arguments required: <filename> <old_str> <new_str>" << RESET << std::endl;
		return (0);
	}
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cout << RED << "Error: Failed to open file" << RESET << std::endl;
		return (0);
	}
	while (!infile.eof() && infile.get(c))
		str += c;
	infile.close();
	replace_str(argv, str);
	return (0);
}