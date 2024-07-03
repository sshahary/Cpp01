/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:44:51 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/03 13:27:07 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <limits>

class Zombie
{
	private:
	std::string name;
	public:
	Zombie(std::string zombieName);

	Zombie();
	~Zombie();
	
	void announce();
	void setName(std::string zombieName);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif