/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:43:47 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 00:05:07 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->m_name = name;
    this->announce();
}

Zombie::~Zombie() {
	std::cout << RED << m_name << " has been annihilated" DEFAULT << std::endl;
}

void Zombie::announce() {
	std::cout << GREEN << m_name << ": BraiiiiiiinnnzzzZ..." DEFAULT << std::endl;
}

