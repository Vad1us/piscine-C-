//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "Enemy.hpp"

Enemy::Enemy() {

}

Enemy::Enemy(Enemy const &e) {
	*this = e;
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {

}

Enemy::~Enemy() {

}

int Enemy::getHP() const {
	return (this->_hp);
}

Enemy& Enemy::operator=(Enemy const &e) {
	this->_hp = e._hp;
	this->_type = e._type;
	return (*this);
}

std::string Enemy::getType() const {
	return (this->_type);
}

void Enemy::takeDamage(int dmg) {
//	if (dmg <= 0) {
//		std::cout << "Enemy is dead.\n";
//		return;
//	}
	if (dmg >= this->_hp) {
		delete this;
	} else {
		this->_hp -= dmg;
		std::cout << "Enemy took <" << dmg << "> dmg, and survived with <" << this->_hp << "> hp.\n";
	}
}
