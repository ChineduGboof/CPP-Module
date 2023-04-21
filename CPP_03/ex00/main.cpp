/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:43:17 by gboof             #+#    #+#             */
/*   Updated: 2023/04/19 21:43:48 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Bob");
    
    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.takeDamage(10);
    claptrap.beRepaired(10);
    claptrap.attack("enemy");
    claptrap.attack("enemy");
    claptrap.attack("enemy");
    claptrap.attack("enemy");
    
    return 0;
}