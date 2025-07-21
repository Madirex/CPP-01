#include "Harl.hpp"

int getLevelIndex(const std::string& level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
			return i;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
		return 1;
	}
	Harl harl;
	int levelIndex = getLevelIndex(argv[1]);
	switch (levelIndex)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}
