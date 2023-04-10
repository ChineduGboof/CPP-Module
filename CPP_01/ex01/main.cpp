/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:46:24 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 20:46:27 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}

int main() {
    int numZombies = 5;
    std::string zombieName = "Horde Zombie";
    Zombie* horde = zombieHorde(numZombies, zombieName);
    for (int i = 0; i < numZombies; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
