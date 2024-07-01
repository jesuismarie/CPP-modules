#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	fname;
	std::string	lname;
	std::string	nick;
	std::string	phone_num;
	std::string	secret;
public:
	Contact();
	~Contact();
	const std::string	&get_fname() const;
	const std::string	&get_lname() const;
	const std::string	&get_nick() const;
	const std::string	&get_phone_num() const;
	const std::string	&get_secret() const;
	void				set_fname(std::string str);
	void				set_lname(std::string str);
	void				set_nick(std::string str);
	void				set_phone_num(std::string str);
	void				set_secret(std::string str);
};

#endif