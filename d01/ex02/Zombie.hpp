#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string _name;
	std::string _type;
public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
	
};

#endif
#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>

class                   Zombie
{

public:

    Zombie();
    Zombie(Zombie const & copy);
    ~Zombie();

    Zombie &           operator=(Zombie const & copy);

private:

};

std::ostream &          operator<<(std::ostream & os, Zombie const & inst);

#endif
