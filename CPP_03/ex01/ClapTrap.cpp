/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:49:05 by gboof             #+#    #+#             */
/*   Updated: 2023/04/19 21:54:46 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
    _name("default"),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "Default ClapTrap constructor called for " << _name << "!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
    _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "Parameter ClapTrap constructor called for " << _name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
    _name(other._name),
    _hitPoints(other._hitPoints),
    _energyPoints(other._energyPoints),
    _attackDamage(other._attackDamage)
{
    std::cout << "Copy ClapTrap constructor called for " << _name << "!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for " << _name << "!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Assignation operator called for " << _name << "!" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " cannot attack " << target << " because it has no energy points left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        if (amount >= _hitPoints)
        {
            _hitPoints = 0;
            std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and dies!" << std::endl;
}
else
{
_hitPoints -= amount;
std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and now has " << _hitPoints << " hit points left!" << std::endl;
}
}
else
{
std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}
}

void ClapTrap::beRepaired(unsigned int amount)
{
if (_hitPoints > 0)
{
_hitPoints += amount;
std::cout << "ClapTrap " << _name << " repairs itself and now has " << _hitPoints << " hit points!" << std::endl;
}
else
{
std::cout << "ClapTrap " << _name << " cannot be repaired because it is dead!" << std::endl;
}
}

const std::string& ClapTrap::getName() const
{
return _name;
}

unsigned int ClapTrap::getHitPoints() const
{
return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
return _attackDamage;
}
