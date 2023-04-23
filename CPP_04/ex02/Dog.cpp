/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:31 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 19:25:30 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): _brain(new Brain()) {
    _type = "Dog";
    std::cout << YELLOW << "A new Dog has been created" << DEFAULT << std::endl;
}

Dog::Dog(const Dog & other): Animal(other) {
    _type = other._type;
    _brain = new Brain(*other._brain);
    std::cout << YELLOW << "A Dog has been copied" << DEFAULT << std::endl;
}

Dog & Dog::operator=(const Dog & other){
    if (this != &other) {
        _type = other._type;
        _brain = new Brain(*other._brain);
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