/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:59:14 by gboof             #+#    #+#             */
/*   Updated: 2023/04/21 10:28:04 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
    ClapTrap()
{
    _name = "default_FragTrap";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << CYAN << "Default FragTrap constructor called for " << _name << "!" << DEFAULT << std::endl;
}

FragTrap::FragTrap(const std::string& name) :
    ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << CYAN << "Parameter FragTrap constructor called for " << _name << "!" << DEFAULT << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) :
    ClapTrap(other)
{
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << CYAN << "Copy FragTrap constructor called for " << _name << "!" << DEFAULT << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << CYAN << "Destructor called for FragTrap " << _name << "!" << DEFAULT << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << CYAN << "Assignation operator called for FragTrap " << _name << "!" << DEFAULT << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        std::cout << YELLOW << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << DEFAULT << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << RED << "FragTrap " << _name << " cannot attack " << target << " because it has no energy points left!" << DEFAULT << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << _name << " says high five to you all!" << std::endl;
}