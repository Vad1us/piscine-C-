//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	std::string		_type;
	int 			_hp;

public:
	Enemy();
	virtual ~Enemy();
	Enemy(Enemy const &e);
	Enemy(int hp, std::string const & type);
	std::string		getType() const;
	int				getHP() const;
	Enemy &operator=(Enemy const &e);
	virtual void	takeDamage(int);
};


#endif //EX01_ENEMY_HPP
