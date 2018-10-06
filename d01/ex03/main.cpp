#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(){
	ZombieHorde *army1 = new ZombieHorde(11);
	army1->announce();
	delete army1;
}