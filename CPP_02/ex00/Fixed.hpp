/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:51 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/18 19:59:06 by cegbulef         ###   ########.fr       */
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

#endif