#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class	Weapon
{
	public:
		Weapon(const std::string &type);
		~Weapon();

		std::string	getType() const;
		void		setType(const std::string &new_type);

	private:
		std::string	_type;
};


#endif
