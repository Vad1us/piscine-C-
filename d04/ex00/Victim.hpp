//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <iostream>

class Victim {
public:
	Victim();
	~Victim();
	Victim(Victim const &v);
	Victim(std::string name);
	Victim &operator=(Victim const &s);
	void	introd();
	std::string getName() const;
	virtual void getPolymorphed() const;
protected:
	std::string _name;
};

std::ostream &operator<<(std::ostream &o, Victim &v);

#endif //EX00_VICTIM_HPP
