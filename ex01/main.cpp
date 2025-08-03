/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:09:39 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/03 18:09:40 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
