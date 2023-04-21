/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:43:30 by gboof             #+#    #+#             */
/*   Updated: 2023/04/21 09:52:28 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"),  _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other):_name(other._name), _hitPoints(other._hitPoints), 
            _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap & other){
    std::cout << "ClapTrap Copy assignment constructor called" << std::endl;
    if(this != (&other))
    {
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
        this->_name = other._name;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints == 0)
    {
        std::cout << CYAN << "ClapTrap " << _name << " has no energy points left and cannot attack." << DEFAULT << std::endl;
        return;
    }
    
    std::cout << YELLOW << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << DEFAULT << std::endl;
    
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0) {
        std::cout << RED << "ClapTrap " << _name << " is already dead and cannot take any more damage." << DEFAULT << std::endl;
        return;
    }
    if (amount >= _hitPoints) {
        _hitPoints = 0;
        std::cout << RED << "ClapTrap " << _name << " takes " << amount << " points of damage and dies!" << DEFAULT << std::endl;
    }
    else {
        _hitPoints -= amount;
        std::cout << RED << "ClapTrap " << _name << " takes " << amount << " points of damage!" << DEFAULT << std::endl;
    }
}

// increase hit point but stop at max 10
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << RED << "ClapTrap " << _name << " is dead and cannot be repaired." << DEFAULT << std::endl;
        return;
    }
    std::cout << GREEN << "ClapTrap " << _name << " is repaired for " << amount << " hit points!" << DEFAULT << std::endl;
    _hitPoints = (_hitPoints + amount >= 10) ? 10 : _hitPoints + amount;
    _energyPoints--;
}
