/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:34:40 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/16 16:43:14 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	if (N <= 0){
    	std::cerr << "Invalid argument: N must be greater than 0" << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (horde == NULL){
		std::cerr << "Memory allocation failed" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
		std::cout << BLUE << name << i + 1;
		horde[i].announce();
		std::cout << DEFAULT;
	}
	return horde;
}
