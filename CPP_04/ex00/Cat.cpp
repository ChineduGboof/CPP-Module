/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:26 by gboof             #+#    #+#             */
/*   Updated: 2023/04/24 15:22:13 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << YELLOW << "Default Cat Constructor Called" << DEFAULT << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat & other): Animal() {
    std::cout << YELLOW << "Default Cat Copy Constructor Called" << DEFAULT << std::endl;
    *this = other;
}

Cat & Cat::operator=(const Cat & other){
    std::cout << YELLOW << "Default Cat Assignment Operator Called" << DEFAULT << std::endl;
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << YELLOW << "Default Cat Destructor Called" << DEFAULT << std::endl;
}

void Cat::makeSound()const {
    std::cout << GREEN << "meaaaooowwwh😻" << DEFAULT << std::endl;
}