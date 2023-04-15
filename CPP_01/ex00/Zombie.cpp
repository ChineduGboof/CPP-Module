/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:43:47 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/15 21:37:03 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name) {
    this->announce();
}

Zombie::~Zombie() {
	std::cout << RED << _name << " has been annihilated" DEFAULT << std::endl;
}

void Zombie::announce() {
	std::cout << GREEN << _name << ": BraiiiiiiinnnzzzZ..." DEFAULT << std::endl;
}

