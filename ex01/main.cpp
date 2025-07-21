#include "Zombie.hpp"

int main(void)
{
	const int	hordeSize = 5;
	std::string	zombieName = "Hordey";

	std::cout << "--- Creating a horde of " << hordeSize << " zombies ---" << std::endl;
	Zombie* myHorde = zombieHorde(hordeSize, zombieName);
	if (myHorde)
	{
		for (int i = 0; i < hordeSize; i++)
		{
			myHorde[i].announce();
		}
	}
	std::cout << "\n--- Destroying the horde ---" << std::endl;
	delete[] myHorde;
	return (0);
}