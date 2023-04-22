/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:57:19 by gboof             #+#    #+#             */
/*   Updated: 2023/04/22 20:22:38 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap gboof("Diamond");
	gboof.attack("Evil");
	gboof.highFivesGuys();
	gboof.beRepaired(1);
	gboof.guardGate();
	gboof.takeDamage(1);
	gboof.whoAmI();
}
