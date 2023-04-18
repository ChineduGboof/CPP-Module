/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:51 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/18 18:20:33 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"

class Fixed{
    private:  
        int _fixedPnbr;
        static const int FRACTIONAL_BITS = 8;
    public:  
        Fixed();
        Fixed(Fixed const & src);
        Fixed & operator=(Fixed const & rhs);
        ~Fixed(void);
        int getRawBits(void)const;
};

Fixed::Fixed():_fixedPnbr(0){
    std::cout <<YELLOW "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

int Fixed::getRawBits(void)const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPnbr;
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

#endif