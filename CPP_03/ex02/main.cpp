/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:57:19 by gboof             #+#    #+#             */
/*   Updated: 2023/04/19 22:02:33 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clapTrapDefault;
    ClapTrap clapTrapParameter("Clappy");
    ClapTrap clapTrapCopy(clapTrapDefault);
    clapTrapParameter.attack("Bad Guy");
    clapTrapCopy.attack("Bad Guy");

    ScavTrap scavTrapDefault;
    ScavTrap scavTrapParameter("Scavy");
    ScavTrap scavTrapCopy(scavTrapDefault);

    scavTrapParameter.attack("Bad Guy");
    scavTrapCopy.attack("Bad Guy");

    scavTrapParameter.guardGate();
    scavTrapCopy.guardGate();

    return 0;
}