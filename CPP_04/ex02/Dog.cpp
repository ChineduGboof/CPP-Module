/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:31 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 09:22:34 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Implement a Brain class. It contains an array of 100 std::string called ideas.
This way, Dog and Cat will have a private Brain* attribute.
Upon construction, Dog and Cat will create their Brain using new Brain();
Upon destruction, Dog and Cat will delete their Brain.
In your main function, create and fill an array of Animal objects. Half of it will
be Dog objects and the other half will be Cat objects. At the end of your program
execution, loop over this array and delete every Animal. You must delete directly dogs
and cats as Animals. The appropriate destructors must be called in the expected order.
Don’t forget to check for memory leaks.
A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
are deep copies!
*/

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
        Animal::operator=(other);
        *_brain = *other._brain;
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