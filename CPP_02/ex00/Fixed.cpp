/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:48 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 08:57:29 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0){
    std::cout <<YELLOW "Default constructor called" << std::endl;
}

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

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed(void){
    std::cout << YELLOW "Destructor called" DEFAULT << std::endl;
}
