/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:48 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/18 22:39:06 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_fixedPnbr(0){
    std::cout <<YELLOW "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num){
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPnbr = num << _fracBits;  // multiply the integer by 2^8 = 256
}

// multiply the float by 2^8 = 256 and round off to an integer using floor or ceil
// the need to add 0.5 before calling std::floor is simply a way to simulate rounding 
// to the nearest integer. It ensures that we round up when the fractional part is greater than or equal to 0.5, and round down otherwise.
Fixed::Fixed(const float num){
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPnbr = static_cast<int>(std::floor(num * (1 << _fracBits) + 0.5));
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

int Fixed::getRawBits(void)const{
    return this->_fixedPnbr;
}

// floatValue = fixedPnbr / 2^_fracBits
float Fixed::toFloat(void) const{
    return static_cast<float>(_fixedPnbr) / (1 << _fracBits);
}

// equivalent to division by 2^8 = 256
int Fixed::toInt(void) const{
    return _fixedPnbr >> _fracBits; 
}

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &rhs)
        this->_fixedPnbr = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed(void){
    std::cout << YELLOW "Destructor called" DEFAULT << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

