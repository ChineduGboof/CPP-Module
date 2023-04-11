/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:34:25 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 10:34:33 by cegbulef         ###   ########.fr       */
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
