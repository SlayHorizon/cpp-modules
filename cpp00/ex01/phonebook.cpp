#include <iostream>
#include <cctype>


class	Contact
{
	public:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

};


class	PhoneBook
{
	private:
		int	_index;
	
	public:
		Contact contact_list[8];

		PhoneBook() : _index(0) {};

		void	addContact(Contact contact)
		{
			contact_list[this->_index] = contact;
			this->_index++;
			if (this->_index > 7)
				this->_index = 0;
		}
};


void	addCommand(PhoneBook *phoneBook);
void	searchCommand(PhoneBook *phoneBook);
void	exitCommand(PhoneBook *phoneBook);


int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;
	std::string	input;

	(void)argc;
	(void)argv;

	while (1)
	{
		std::cout << "My Awsome PhoneBook\nCommands: ADD - EXIT - SEARCH" << std::endl;
		std::cin >> input;

		if (input == "EXIT")
		{
			exitCommand(&phoneBook);
			return (0);
		}
		else if (input == "SEARCH")
			searchCommand(&phoneBook);
		else if (input == "ADD")
			addCommand(&phoneBook);
	}
	return 0;
}


void	addCommand(PhoneBook *phoneBook)
{
	Contact	new_contact;

	std::cout << "Please enter your new contact \"First Name\"" << std::endl;
	std::cin >> new_contact.firstName;

	std::cout << "Please enter your new contact \"lastName\"" << std::endl;
	std::cin >> new_contact.lastName;

	std::cout << "Please enter your new contact \"nickname\"" << std::endl;
	std::cin >> new_contact.nickname;

	std::cout << "Please enter your new contact \"phoneNumber\"" << std::endl;
	std::cin >> new_contact.phoneNumber;

	std::cout << "Please enter your new contact \"darkestSecret\"" << std::endl;
	std::cin >> new_contact.darkestSecret;
	
	phoneBook->addContact(new_contact);
}


void	searchCommand(PhoneBook *phoneBook)
{
	const std::string COLUMNS[4] = {"Index", "First name", "Last name", "NickName"};
	Contact	contact;

	for (int i = 0; i < 4; i++)
	{
		std::cout << std::string().assign(10, ' ').replace(10 - COLUMNS[i].length(), COLUMNS[i].length(), COLUMNS[i]);
		std::cout << "|";
	}
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
	{
		contact = phoneBook->contact_list[i];

		std::cout << std::string().assign(9, ' ') << i;
		std::cout << "|";

		std::cout << std::string().assign(10, ' ').replace(10 - contact.firstName.length(), contact.firstName.length(), contact.firstName);
		std::cout << "|";

		std::cout << std::string().assign(10, ' ').replace(10 - contact.lastName.length(), contact.lastName.length(), contact.lastName);
		std::cout << "|";

		std::cout << std::string().assign(10, ' ').replace(10 - contact.nickname.length(), contact.nickname.length(), contact.nickname);
		std::cout << "|";

		std::cout << std::endl;
	}

	std::cout << "Which index would you like to display?" << std::endl;

	int	n;
	while (1)
	{
		std::cin >> n;
		if (std::cin.fail())
		{
			std::cout << "Please enter a valid index between 0 and 7:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			continue;
		}
		else if (n >= 0 && n < 8)
		{
			std::cout << "First name: " << phoneBook->contact_list[n].firstName << std::endl;
			std::cout << "Last name: " << phoneBook->contact_list[n].lastName << std::endl;
			std::cout << "Nickname: " << phoneBook->contact_list[n].nickname << std::endl;
			std::cout << "Phone number: " << phoneBook->contact_list[n].phoneNumber << std::endl;
			std::cout << "Darkest Secret: " << phoneBook->contact_list[n].darkestSecret << std::endl;
			break ;
		}
		else
			std::cout << "Please enter a valid index between 0 and 7:" << std::endl;
	}
}


void	exitCommand(PhoneBook *phoneBook)
{
	(void)phoneBook;

	std::cout << "PhoneBook terminated!" << std::endl;
	// delete phoneBook;
	return ;
}
