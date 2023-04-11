/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:27:38 by gboof             #+#    #+#             */
/*   Updated: 2023/04/11 09:27:44 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *horde = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		std::cout << GREEN << name << i + 1;
		horde->announce();
		std::cout << DEFAULT;
	}
	return horde;
}
