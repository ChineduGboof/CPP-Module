/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:59:14 by gboof             #+#    #+#             */
/*   Updated: 2023/04/21 10:13:41 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
    ClapTrap()
{
    _name = "default_ScavTrap";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << CYAN << "Default ScavTrap constructor called for " << _name << "!" << DEFAULT << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) :
    ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << CYAN << "Parameter ScavTrap constructor called for " << _name << "!" << DEFAULT << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) :
    ClapTrap(other)
{
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << CYAN << "Copy ScavTrap constructor called for " << _name << "!" << DEFAULT << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << CYAN << "Destructor called for ScavTrap " << _name << "!" << DEFAULT << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << CYAN << "Assignation operator called for ScavTrap " << _name << "!" << DEFAULT << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        std::cout << YELLOW << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << DEFAULT << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << RED << "ScavTrap " << _name << " cannot attack " << target << " because it has no energy points left!" << DEFAULT << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << GREEN << "ScavTrap " << _name << " enters Gate keeper mode!" << DEFAULT << std::endl;
}
