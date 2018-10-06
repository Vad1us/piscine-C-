//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle : public virtual AWeapon{
public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &p);
	PlasmaRifle(std::string const & name, int apcost, int damage);
	PlasmaRifle &operator=(PlasmaRifle const &p);

	void attack() const;
};


#endif //EX01_PLASMARIFLE_HPP
