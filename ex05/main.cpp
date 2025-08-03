/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:11:57 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/03 18:11:58 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "--- Testing DEBUG ---" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "--- Testing INFO ---" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "--- Testing WARNING ---" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "--- Testing ERROR ---" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "--- Testing INVALID ---" << std::endl;
	harl.complain("INVALID_LEVEL");
	std::cout << std::endl;

	return 0;
}
