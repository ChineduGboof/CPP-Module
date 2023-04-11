/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:46:40 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 09:31:00 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << RED "A zombie has been annihilated" DEFAULT << std::endl;
}

void Zombie::announce() {
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
