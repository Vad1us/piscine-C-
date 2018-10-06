//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP


#include "AWeapon.hpp"

class PowerFist : public virtual AWeapon {
public:
	PowerFist();
	~PowerFist();
	PowerFist(PowerFist const &p);
	PowerFist(std::string const & name, int apcost, int damage);
	PowerFist &operator=(PowerFist const &p);

	void attack() const;
};


#endif //EX01_POWERFIST_HPP
