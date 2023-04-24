/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:23 by gboof             #+#    #+#             */
/*   Updated: 2023/04/24 15:19:56 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("default") {
    std::cout << YELLOW << "Default Animal Constructor Called" << DEFAULT << std::endl;
}

Animal::Animal(const Animal & other){
    std::cout << YELLOW << "Default Animal Copy Constructor Called" << DEFAULT << std::endl;
    *this = other;
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