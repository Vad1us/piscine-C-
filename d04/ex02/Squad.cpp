//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "Squad.hpp"

Squad::Squad() {
	this->_marines = 0;
	this->_count = 0;
}

Squad::~Squad() {
	s_marine *mar = this->_marines;

	while (mar) {
		delete mar->marine;
		delete mar;
		mar = mar->next;
	}
}

int Squad::push(ISpaceMarine *marine) {
	this->_count++;
	if (this->_marines == NULL) {
		this->_marines = new s_marine;
		this->_marines->marine = marine;
		this->_marines->next = NULL;
	} else {
		s_marine *tmp;
		tmp = this->_marines;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new s_marine;
		tmp->next->marine = marine;
		tmp->next->next = NULL;
	}
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int i) const {
	int			i2;
	s_marine	*tmp;

	i2 = 0;
	tmp = this->_marines;
	while (tmp && i2 != i) {
		i2++;
		tmp = tmp->next;
	}
	return (tmp->marine);
}

int Squad::getCount() const {
	return (this->_count);
}