/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:57:19 by gboof             #+#    #+#             */
/*   Updated: 2023/04/21 10:32:08 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap evil("evil");
	FragTrap fraggy("fraggy");
	evil.attack("fraggy");
	evil.attack("fraggy");
	evil.attack("fraggy");
	fraggy.beRepaired(20);
	fraggy.beRepaired(20);
	fraggy.attack("evil");
	fraggy.highFivesGuys();
}
