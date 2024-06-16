#include "Contact.hpp"

/******************************** CONSTRUCTORS ********************************/

Contact::Contact()
{
}

Contact::~Contact()
{
}

/*********************************** GETTERS ***********************************/

std::string	Contact::get_fname(void)
{
	return (this->fname);
}

std::string	Contact::get_lname(void)
{
	return (this->lname);
}

std::string	Contact::get_nick(void)
{
	return (this->nick);
}

std::string	Contact::get_phone_num(void)
{
	return (this->phone_num);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}

/********************************** SETTERS ***********************************/

void		Contact::set_fname(std::string str)
{
	this->fname = str;
}

void		Contact::set_lname(std::string str)
{
	this->lname = str;
}

void		Contact::set_nick(std::string str)
{
	this->nick = str;
}

void		Contact::set_phone_num(std::string str)
{
	this->phone_num = str;
}

void		Contact::set_secret(std::string str)
{
	this->secret = str;
}