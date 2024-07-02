/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:44:37 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/02 14:11:29 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N;
    std::cout << "Enter the number of zombies: ";
    std::cin >> N;

    // Validate input
    if (N <= 0) {
        std::cerr << "The number of zombies must be positive." << std::endl;
        return 1;
    }

    // Creating a horde of zombies
    Zombie* horde = zombieHorde(N, "HordeZombie");

    if (horde != nullptr) {
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