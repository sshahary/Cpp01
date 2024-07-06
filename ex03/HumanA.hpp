/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:00:20 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/06 17:38:50 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanA
{
 private:
    std::string name;
    Weapon& weapon;

 public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack() const;
};

#endif
