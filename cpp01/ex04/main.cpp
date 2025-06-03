#include <iostream>
#include <fstream>


int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error format: <fileName> <stringToSearch> <stringToReplace>" << std::endl;
		return 1;
	}
	
	std::string		fileName(argv[1]);
	std::string		replaceFileName(fileName + ".replace");
	std::string		toSearch(argv[2]);
	std::string		toReplace(argv[3]);

	if (toSearch.empty())
	{
		std::cerr << "Error: string to search is empty";
		return 1;
	}

	std::ifstream	file(fileName.c_str());
	if (!file)
	{
		std::cerr << "Error: Could not open input file: " << fileName << std::endl;
		return 1;
	}

	std::ofstream	replaceFile(replaceFileName.c_str());
	if (!replaceFile)
	{
		std::cerr << "Error: Could not create output file: " << replaceFileName << std::endl;
		return 1;
	}

	std::string	line;
	while (std::getline(file,line))
	{
		size_t	position = 0;
		while ((position = line.find(toSearch, position)) != std::string::npos)
		{
			line.erase(position, toSearch.length());
			line.insert(position, toReplace);
			position += toReplace.length();
		}
		replaceFile << line << std::endl;
	}

	file.close();
	replaceFile.close();

	return 0;
}
