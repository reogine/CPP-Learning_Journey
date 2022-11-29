#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_
#include <iostream>
#include"Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*weapon;

public:
	HumanB(std::string	name);
	void	setWeapon(Weapon &new_weapon);
	void	attack();
};

#endif