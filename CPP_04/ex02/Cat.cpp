/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:26 by gboof             #+#    #+#             */
/*   Updated: 2023/04/25 10:03:53 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _brain(new Brain()) {
    _type = "Cat";
    std::cout << YELLOW << "A new Cat has been created" << DEFAULT << std::endl;
}

Cat::Cat(const Cat & other): Animal(other) {
    _brain = new Brain(*other._brain);
    std::cout << YELLOW << "A Cat has been copied" << DEFAULT << std::endl;
    *this = other;
}

Cat & Cat::operator=(const Cat & other){
    std::cout << YELLOW << "A Cat has been assigned" << DEFAULT << std::endl;
    if (this != &other) {
        *_brain = *other._brain;
        _type = other._type;
    }
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