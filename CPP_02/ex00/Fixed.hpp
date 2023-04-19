/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:42:51 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 08:57:12 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"

class Fixed{
    private:  
        int _value;
        static const int _fracBits = 8;
    public:  
        Fixed();
        Fixed(Fixed const & src);
        Fixed & operator=(Fixed const & rhs);
        ~Fixed(void);
        int getRawBits(void)const;
        void setRawBits(int const raw);
};

#endif