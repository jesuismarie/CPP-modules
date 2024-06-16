#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];
	int		idx;
public:
	Phonebook();
	~Phonebook();
	void		add_contact(void);
	void		search_contact(void);
	int			print_list(Contact contacts[8]);
	void		print_contact(Contact contact);
	std::string	format_str(std::string str, unsigned long max);
};

#endif