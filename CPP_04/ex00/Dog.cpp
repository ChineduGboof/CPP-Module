/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:31 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 09:22:25 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << YELLOW << "Default Dog Constructor Called" << DEFAULT << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog & other) {
    std::cout << YELLOW << "Default Dog Copy Constructor Called" << DEFAULT << std::endl;
    _type = other._type;
}

Dog & Dog::operator=(const Dog & other){
    std::cout << YELLOW << "Default Dog Assignment Operator Called" << DEFAULT << std::endl;
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << YELLOW << "Default Dog Destructor Called" << DEFAULT << std::endl;
}

void Dog::makeSound()const {
    std::cout << GREEN << "wooof woof🐶" << DEFAULT << std::endl;
}