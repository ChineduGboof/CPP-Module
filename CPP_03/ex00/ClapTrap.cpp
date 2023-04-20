/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:43:30 by gboof             #+#    #+#             */
/*   Updated: 2023/04/19 21:43:34 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left and cannot attack." << std::endl;
        return;
    }
    
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead and cannot take any more damage." << std::endl;
        return;
    }
    
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    
    _hitPoints = (amount >= _hitPoints) ? 0 : _hitPoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot be repaired." << std::endl;
        return;
    }
    
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points!" << std::endl;
    
    _hitPoints = (_hitPoints + amount >= 10) ? 10 : _hitPoints + amount;
    _energyPoints--;
}
