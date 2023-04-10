/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:43:26 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 20:43:30 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

void randomChump(std::string name) {
    Zombie zombie = Zombie(name);
    zombie.announce();
}

int main() {
    Zombie zombie1 = Zombie("Zombie 1");
    zombie1.announce();

    Zombie* zombie2 = newZombie("Zombie 2");
    zombie2->announce();
    delete zombie2;

    randomChump("Zombie 3");

    return 0;
}
