/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:31 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 23:47:29 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(): _brain(new Brain()) {
    _type = "Dog";
    std::cout << YELLOW << "A new Dog has been created" << DEFAULT << std::endl;
}

// Dog::Dog(const Dog & other): Animal(other) {
//     _type = other._type;
//     _brain = new Brain(*other._brain);
//     std::cout << YELLOW << "A Dog has been copied" << DEFAULT << std::endl;
// }

Dog::Dog(const Dog & other): Animal(other) {
    _type = other._type;
    if (other._brain) {
        _brain = new Brain(*other._brain);
    } else {
        _brain = NULL;
    }
    std::cout << YELLOW << "A Dog has been copied" << DEFAULT << std::endl;
}

// Dog & Dog::operator=(const Dog & other){
//     if (this != &other) {
//         _brain = new Brain(*other._brain);
//         _type = other._type;
//     }
//     std::cout << YELLOW << "A Dog has been assigned" << DEFAULT << std::endl;
//     return *this;
// }

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        delete _brain;
        _brain = other._brain ? new Brain(*other._brain) : NULL;
        _type = other._type;
    }
    std::cout << YELLOW << "A Dog has been assigned" << DEFAULT << std::endl;
    return *this;
}

Dog::~Dog(){
    delete _brain;
    std::cout << YELLOW << "A Dog has been destroyed" << DEFAULT << std::endl;
}

void Dog::makeSound()const {
    std::cout << GREEN << "wooof woof🐶" << DEFAULT << std::endl;
}

Brain* Dog::getBrain() const {
    return _brain;
}