#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_
#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string name_wp);
		const std::string&	getType();
		void	setType(std::string new_type);
};
#endif
