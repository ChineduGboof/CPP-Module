/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:29:18 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 12:29:21 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(const Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}
