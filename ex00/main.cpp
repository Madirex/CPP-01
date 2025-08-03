/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:08:20 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/03 18:08:22 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "--- 1. Creating a Zombie on the Heap ---" << std::endl;
	Zombie* heapZombie = newZombie("Heapy");
	heapZombie->announce();
	delete heapZombie;
	std::cout << "--------------------------------------\n" << std::endl;

	std::cout << "--- 2. Creating a Zombie on the Stack (via randomChump) ---" << std::endl;
	randomChump("Chumpy");
	std::cout << "-----------------------------------------------------------\n" << std::endl;

	std::cout << "--- 3. Creating a Zombie directly on main's Stack ---" << std::endl;
	Zombie stackZombie("Stacky");
	stackZombie.announce();
	std::cout << "--- The program is about to end. 'Stacky' will be destroyed now. ---" << std::endl;
	
	return (0);
}
