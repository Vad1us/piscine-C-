#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public:

	Contact();
	~Contact(void);
	std::string	firstn;
	std::string	lastn;
	std::string	nickn;
	std::string	login;
	std::string	postaladdr;
	std::string	email;
	std::string	phonen;
	std::string	birthday;
	std::string	meal;
	std::string	color;
	std::string	secret;
	int	index;
};

#endif