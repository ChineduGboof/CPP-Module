/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:34:40 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 10:37:19 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *horde = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		std::cout << BLUE << name << i + 1;
		horde->announce();
		std::cout << DEFAULT;
	}
	return horde;
}
