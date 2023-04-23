/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:02:55 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 16:32:18 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    To ensure you understood how it works, implement a WrongCat class that inherits
    from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
    in the code above, the WrongCat should output the WrongAnimal sound.
    Implement and turn in more tests than the ones given above.
*/

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("Anime") {
    std::cout << YELLOW << "Default WrongAnimal Constructor Called" << DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & other): _type(other._type){
    std::cout << YELLOW << "Default WrongAnimal Copy Constructor Called" << DEFAULT << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other){
    std::cout << YELLOW << "Default WrongAnimal Assignment Operator Called" << DEFAULT << std::endl;
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << YELLOW << "Default WrongAnimal Destructor Called" << DEFAULT << std::endl;
}

void WrongAnimal::makeSound()const{
    std::cout << GREEN << "bleet bleet 🐐" << DEFAULT << std::endl;
}

const std::string & WrongAnimal::getType()const{
    return this->_type;
}