#include <iostream>	// Standard Input / Output Streams Library (cin, cout)
#include <cctype>	// Character handling functions (toupper(int c))


int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (++i < argc)
	{
		while (argv[i][j])
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		j = 0;
	}
	std::cout << std::endl;
	return 0;
}
