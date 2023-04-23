/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:17:19 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 10:59:55 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
/*
    the scope resolution operator :: is used to access a member of a specific namespace or class.
    This is necessary because DiamondTrap inherits from multiple base classes, 
    each of which may have members with the same name. 
    Using the :: operator allows us to specify which base class we want to access a member from.
*/

 DiamondTrap::DiamondTrap(): _name("Default") {
    std::cout << CYAN << "DiamondTrap default constructor called" << DEFAULT <<std::endl;
    ClapTrap::_name = _name + "_clap_name";
    ClapTrap::_hitPoints = FragTrap::_hitPoints;
    ClapTrap::_energyPoints = ScavTrap::_energyPoints;
    ClapTrap::_attackDamage = FragTrap::_attackDamage;
 }

DiamondTrap::DiamondTrap(const std::string & name): _name(name) {
    std::cout << CYAN << "DiamondTrap name constructor called" << DEFAULT <<std::endl;
    ClapTrap::_name = _name + "_clap_name";
    ClapTrap::_hitPoints = FragTrap::_hitPoints;
    ClapTrap::_energyPoints = ScavTrap::_energyPoints;
    ClapTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), FragTrap(other), ScavTrap(other) {
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << CYAN << "Copy DiamondTrap constructor called for " << _name << "!" << DEFAULT << std::endl; 
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
    std::cout << CYAN << "Assignation operator called for DiamondTrap " << _name << "!" << DEFAULT << std::endl;
    if (this != &other)
    {
        _name = other._name;
        ClapTrap::_name = other.ClapTrap::_name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << CYAN << "Destructor called for DiamondTrap " << _name << "!" << DEFAULT << std::endl;
}

void DiamondTrap::whoAmI(){
    std::cout << GREEN << "My name: " << _name << " My ClapTrap name: " << ClapTrap::_name << std::endl;
}