//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX02_ISQUAD_HPP
#define EX02_ISQUAD_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

typedef struct 	s_marine {
	ISpaceMarine	*marine;
	s_marine		*next;
};

class ISquad {
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};


#endif //EX02_ISQUAD_HPP
