/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:51 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 10:29:40 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"

class Fixed{
    private:  
        int _fixedPnbr;
        static const int _fracBits = 8;
    public:  
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(Fixed const & src);
        Fixed & operator=(Fixed const & rhs);
        ~Fixed(void);
        int getRawBits(void)const;
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif