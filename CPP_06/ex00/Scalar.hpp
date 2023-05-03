/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:02:01 by gboof             #+#    #+#             */
/*   Updated: 2023/05/03 22:30:41 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert.hpp

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Converter {
public:
static bool is_pseudo_literal(std::string& s);
static void print_all_convetions(std::string& s);
static bool is_valid(std::string& s);

private:
static void convert_to_char(std::string& s);
static void convert_to_int(std::string& s);
static void convert_to_float(std::string& s);
static void convert_to_double(std::string& s);
};

#endif // CONVERT_HPP


