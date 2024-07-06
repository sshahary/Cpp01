/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:22:31 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/06 16:58:45 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	private:
	std::string type;

	public:
	Weapon(const std::string& type);
	const std::string& getType() const;
	void setType(const std::string& newType);
	
};

#endif