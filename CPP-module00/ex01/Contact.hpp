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
		Contact(void);
		~Contact();
		const std::string&	get_fname(void) const;
		const std::string&	get_lname(void) const;
		const std::string&	get_nick(void) const;
		const std::string&	get_phone_num(void) const;
		const std::string&	get_secret(void) const;
		void				set_fname(std::string str);
		void				set_lname(std::string str);
		void				set_nick(std::string str);
		void				set_phone_num(std::string str);
		void				set_secret(std::string str);
};

#endif
