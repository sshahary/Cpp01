/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:30:00 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/03 15:48:46 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	private:
	std::string name;
	public:
	
	Zombie(std::string zombieName);
	~Zombie();
	void announce();
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif