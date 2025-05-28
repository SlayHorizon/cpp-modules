#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class	HumanA
{
	public:
		HumanA(const std::string human_name, Weapon &weapon);
		~HumanA();

		void	setWeapon(Weapon &new_weapon);
		void	attack() const;

	private:
		std::string	_name;
		Weapon		*_weapon;
};


#endif
