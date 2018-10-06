//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include "iostream"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &marine);
	TacticalMarine(int i);
	~TacticalMarine();
	TacticalMarine &operator=(TacticalMarine const &marine);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_HPP
