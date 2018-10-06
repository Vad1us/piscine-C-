//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public virtual Enemy {

public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const &e);
	RadScorpion(int hp, std::string const & type);

	//virtual void	takeDamage(int);

};


#endif //EX01_RADSCORPION_HPP
