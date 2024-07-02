/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:29:41 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/02 13:35:30 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
    // Creating a zombie on the heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie; // Remember to delete the heap-allocated zombie

    // Creating a zombie on the stack
    randomChump("StackZombie");

    return 0;
}