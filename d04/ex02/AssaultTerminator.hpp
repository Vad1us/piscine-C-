//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &Terminator);
	~AssaultTerminator();
	AssaultTerminator &operator=(AssaultTerminator const &t);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_HPP
