#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class	HumanB
{
	public:
		HumanB(const std::string& human_name);
		~HumanB();

		void	setWeapon(Weapon &new_weapon);
		void	attack() const;

	private:
		std::string	_name;
		Weapon*		_weapon;
};


#endif
