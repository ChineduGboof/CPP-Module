/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:02:01 by gboof             #+#    #+#             */
/*   Updated: 2023/05/04 19:54:12 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert.hpp

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Converter {
    private:
        static void convert_to_char(std::string& s);
        static void convert_to_int(std::string& s);
        static void convert_to_float(std::string& s);
        static void convert_to_double(std::string& s);
    public:
        Converter();
		Converter(Converter const & other);
		Converter &operator=(Converter const & other);
		~Converter();

        static bool is_pseudo_literal(std::string& s);
        static void display_conversions(std::string& s);
        static bool is_valid(std::string& s);
};

#endif


/*
The use of static means they can be called without an instance of the class, 
by simply calling Converter::function_name()
*/