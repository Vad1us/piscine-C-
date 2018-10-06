#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(){
	Zombie zomb1("Bryan", "Brain-eater");
	Zombie * zomb2 = new Zombie("Brad", "Blood-sucker");
	delete zomb2;
	ZombieEvent ez;
	ez.setZombieType("kingslayer");
	Zombie * zomb3 = ez.newZombie("Chimichanga");
	delete zomb3;
	Zombie * zomb4 = ez.randomChump();
	delete zomb4;
}