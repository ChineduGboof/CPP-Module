/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:26 by gboof             #+#    #+#             */
/*   Updated: 2023/04/24 13:26:07 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _brain(new Brain()) {
    _type = "Cat";
    std::cout << YELLOW << "A new Cat has been created" << DEFAULT << std::endl;
}

// Cat::Cat(const Cat & other): Animal(other) {
//     _type = other._type;
//     _brain = new Brain(*other._brain);
//     std::cout << YELLOW << "A Cat has been copied" << DEFAULT << std::endl;
// }

Cat::Cat(const Cat & other): Animal(other) {
    _type = other._type;
    if (other._brain) {
        _brain = new Brain(*other._brain);
    } else {
        _brain = NULL;
    }
    std::cout << YELLOW << "A Cat has been copied" << DEFAULT << std::endl;
}

// Cat & Cat::operator=(const Cat & other){
//     if (this != &other) {
//         _type = other._type;
//         _brain = new Brain(*other._brain);
//     }
//     std::cout << YELLOW << "A Cat has been assigned" << DEFAULT << std::endl;
//     return *this;
// }

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        delete _brain;
        _brain = other._brain ? new Brain(*other._brain) : NULL;
        _type = other._type;
    }
    std::cout << YELLOW << "A Cat has been assigned" << DEFAULT << std::endl;
    return *this;
}

Cat::~Cat(){
    delete _brain;
    std::cout << YELLOW << "A Cat has been destroyed" << DEFAULT << std::endl;
}

void Cat::makeSound()const {
    std::cout << GREEN << "meaaaooowwwh😻" << DEFAULT << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}