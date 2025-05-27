#pragma once

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>


class	Weapon
{
	public:
		Weapon(const std::string type);
		~Weapon();

		std::string	getType();
		void	setType(const std::string new_type);

	private:
		std::string	_type;
};
// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a constant reference to type.
// • A setType() member function that sets type using the new value passed as a pa-
// rameter.

#endif