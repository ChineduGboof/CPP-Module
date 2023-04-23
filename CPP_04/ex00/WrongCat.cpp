/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:02:47 by gboof             #+#    #+#             */
/*   Updated: 2023/04/22 23:22:19 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << YELLOW << "Default WrongCat Constructor Called" << DEFAULT << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & other) {
    std::cout << YELLOW << "Default WrongCat Copy Constructor Called" << DEFAULT << std::endl;
    _type = other._type;
}

WrongCat & WrongCat::operator=(const WrongCat & other){
    std::cout << YELLOW << "Default WrongCat Assignment Operator Called" << DEFAULT << std::endl;
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << YELLOW << "Default WrongCat Destructor Called" << DEFAULT << std::endl;
}

void WrongCat::makeSound()const {
    std::cout << GREEN << "mooooaaah" << DEFAULT << std::endl;
}