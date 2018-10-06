//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant : public virtual Enemy {

public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &e);
	SuperMutant(int hp, std::string const & type);

	virtual void	takeDamage(int);

};


#endif //EX01_SUPERMUTANT_HPP
