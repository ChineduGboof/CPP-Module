/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:02:01 by gboof             #+#    #+#             */
/*   Updated: 2023/05/07 17:59:25 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert.hpp

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <sstream>

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"
#define GREEN	"\033[1;32m"
#define CYAN	"\033[0;36m"
#define RED 	"\e[0;31m"

class ScalarConverter {
    private:
        static void convert_to_char(std::string& s);
        static void convert_to_int(std::string& s);
        static void convert_to_float(std::string& s);
        static void convert_to_double(std::string& s);
    public:
        ScalarConverter();
		ScalarConverter(ScalarConverter const & other);
		ScalarConverter &operator=(ScalarConverter const & other);
		~ScalarConverter();

        static bool is_pseudo_literal(std::string& s);
        static void convert(std::string& s);
        static bool is_valid(std::string& s);
};

#endif


/*
The use of static means they can be called without an instance of the class, 
by simply calling ScalarConverter::function_name()
*/