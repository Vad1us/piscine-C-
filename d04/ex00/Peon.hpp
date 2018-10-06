//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
	Peon();
	~Peon();
	Peon &operator=(Peon const &s);
	Peon(std::string name);
	//void	introd();
	std::string getName();
	void getPolymorphed() const;
};


#endif //EX00_PEON_HPP
