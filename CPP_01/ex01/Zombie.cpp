/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:34:25 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/16 00:53:01 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << RED "A zombie has been annihilated" DEFAULT << std::endl;
}

void Zombie::setName(std::string name){_name = name;}

void Zombie::announce() {
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
