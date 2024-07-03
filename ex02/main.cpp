/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:39:22 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/03 15:47:16 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main()
{
	// String variable initialized
	std::string str = "HI THIS IS BRAIN";

	// Pointer to the string
	std::string *stringPTR = &str;

	// Reference to the string
	std::string &stringREF = str;

	// Printing memory addresses
	std::cout << "Memory address of the string variable (str): " << &str << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	// Printing values
	std::cout << "Value of the string variable (str): " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}