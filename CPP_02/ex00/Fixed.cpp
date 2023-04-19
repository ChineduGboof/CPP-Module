/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:48 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 10:29:57 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0){
    std::cout <<YELLOW "Default constructor called" << std::endl;
}

//performs a shallow copy of the values of the src object into the new object being created, 
//without making any modifications to the original object.
Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

int Fixed::getRawBits(void)const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    this->_value = raw;
}

// The copy assignment operator is used to assign one object of a class to another object of the same class. 
// the function first checks if the address of the current object (this) is equal to the address of the rhs object,
// which would indicate a self-assignment. 
// If the two addresses are not equal, the value of the rhs object is assigned to the _value data member of the current object.
Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed(void){
    std::cout << YELLOW "Destructor called" DEFAULT << std::endl;
}
