/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:59:12 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/06 16:59:44 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string& newType)
{
	type = newType;
}
