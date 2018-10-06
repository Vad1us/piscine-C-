//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP


#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
private:
	int			_count;
	s_marine	*_marines;
public:
	Squad();
	~Squad();

	int				getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int				push(ISpaceMarine*);
};


#endif //EX02_SQUAD_HPP
