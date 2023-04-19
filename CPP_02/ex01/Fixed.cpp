/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:48 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 12:54:29 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0){
    std::cout <<YELLOW "Default constructor called" << std::endl;
}

/*
    converts an integer into a fixed-point number.
    multiply the integer by 2^8 = 256
*/
Fixed::Fixed(int const num){
    std::cout << "Int constructor called" << std::endl;
    this->_value = num << _fracBits;  
}

/*
    Convert a floating-point number to a fixed-point representation
    multiply the float by 2^8 = 256 and round off to an integer
    add 0.5 to ensure that we round UP when the fractional part is 
    greater than or equal to 0.5, and round down otherwise.
*/
Fixed::Fixed(const float num){
    std::cout << "Float constructor called" << std::endl;
    this->_value = static_cast<int>(roundf(num * (1 << _fracBits) + 0.5));
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

int Fixed::getRawBits(void)const{
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    this->_value = raw;
}
/*
    convert a fixed-point number back to its equivalent floating-point value.
    floatValue = fixedPnbr / 2^_fracBits
*/
float Fixed::toFloat(void) const{
    return static_cast<float>(_value) / (1 << _fracBits);
}

/*
    converts a fixed-point number back to its integer value
    equivalent to division by 2^8 = 256
*/
int Fixed::toInt(void) const{
    return _value >> _fracBits; 
}

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed(void){
    std::cout << YELLOW "Destructor called" DEFAULT << std::endl;
}

/*
    Overloading the << operator for a class allows you to directly 
    print objects of that class without having to call getter functions.
*/
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
