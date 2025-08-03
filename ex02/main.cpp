/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:10:11 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/03 18:10:12 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	// 1. Variable initialization
	std::string brainString = "HI THIS IS BRAIN";

	// 2. Pointer and Reference declaration
	std::string* stringPTR = &brainString;
	std::string& stringREF = brainString;

	// 3. Printing memory addresses
	std::cout << "--- MEMORY ADDRESSES ---" << std::endl;
	std::cout << "Address of the string variable: " << &brainString << std::endl;
	std::cout << "Address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "Address held by stringREF:      " << &stringREF << std::endl;
	std::cout << std::endl;

	// 4. Printing the values
	std::cout << "--- VALUES ---" << std::endl;
	std::cout << "Value of the string variable:   " << brainString << std::endl;
	std::cout << "Value pointed to by stringPTR:  " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:  " << stringREF << std::endl;

	return (0);
}
