//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &s);
	~Sorcerer();
	Sorcerer &operator=(Sorcerer const &s);
	void	introd();
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &) const;
private:
	Sorcerer();
	std::string _name;
	std::string _title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer &s);

#endif //EX00_SORCERER_HPP
