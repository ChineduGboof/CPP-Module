/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:31 by gboof             #+#    #+#             */
/*   Updated: 2023/04/25 10:03:44 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): _brain(new Brain()) {
    _type = "Dog";
    std::cout << YELLOW << "A new Dog has been created" << DEFAULT << std::endl;
}

Dog::Dog(const Dog & other): Animal(other) {
    _brain = new Brain(*other._brain);
    std::cout << YELLOW << "A Dog has been copied" << DEFAULT << std::endl;
    *this = other;
}

Dog & Dog::operator=(const Dog & other){
    std::cout << YELLOW << "A Dog has been assigned" << DEFAULT << std::endl;
    if (this != &other) {
        *_brain = *other._brain;
        _type = other._type;
    }
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