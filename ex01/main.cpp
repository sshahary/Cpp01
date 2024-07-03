/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:44:37 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/03 13:50:20 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N;
    std::cout << "Enter the number of zombies: ";

    // Input validation loop
    while (true) {
        std::cin >> N;
        
        // Check if the input is valid
        if (std::cin.fail() || N <= 0)
        {
            if (std::cin.eof())
            {
                std::cerr << "Input terminated by EOF (Ctrl+D)." << std::endl;
                return 1;
            }
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            std::cerr << "Invalid input.\nPlease enter a positive number: ";
        }
        else
        {
            // Check if there's any non-whitespace character left in the input stream
            if (std::cin.peek() != '\n')
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "Invalid input.\nPlease enter a positive number without any trailing characters: ";
            } 
            else
                break;
        }
    }

    // Creating a horde of zombies
    Zombie* horde = zombieHorde(N, "HordeZombie");

    if (horde != NULL) {
        for (int i = 0; i < N; ++i) {
            horde[i].announce();
        }
        // Clean up memory
        delete[] horde;
    } else {
        std::cerr << "Failed to create the zombie horde." << std::endl;
        return 1;
    }

    return 0;
}