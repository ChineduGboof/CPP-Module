/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:23 by gboof             #+#    #+#             */
/*   Updated: 2023/04/22 23:14:54 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("default") {
    std::cout << YELLOW << "Default Animal Constructor Called" << DEFAULT << std::endl;
}

Animal::Animal(const Animal & other): _type(other._type){
    std::cout << YELLOW << "Default Animal Copy Constructor Called" << DEFAULT << std::endl;
}

Animal & Animal::operator=(const Animal & other){
    std::cout << YELLOW << "Default Animal Assignment Operator Called" << DEFAULT << std::endl;
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << YELLOW << "Default Animal Destructor Called" << DEFAULT << std::endl;
}

void Animal::makeSound()const{
    std::cout << GREEN << "cluck cluck" << DEFAULT << std::endl;
}

const std::string & Animal::getType()const{
    return this->_type;
}