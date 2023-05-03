/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:53:27 by gboof             #+#    #+#             */
/*   Updated: 2023/05/03 22:34:45 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Scalar.hpp"

bool Converter::is_pseudo_literal(std::string &s) {
    return s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf"
            || s == "+inff" || s == "inff" || s == "-inff";
}

void Converter::convert_to_char(std::string &s) {
    if (is_pseudo_literal(s)) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    char c = static_cast<char>(atoi(s.c_str()));
    if (c < ' ' || c > '~') {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    std::cout << c << std::endl;
}

void Converter::convert_to_int(std::string &s) {
    if (is_pseudo_literal(s)) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    std::cout << std::atoi(s.c_str()) << std::endl;
}

void Converter::convert_to_float(std::string &s) {
    float nbr = std::strtof(s.c_str(), nullptr);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << nbr << ".0f" << std::endl;
        return ;
    }
    std::cout << nbr << "f" << std::endl;
}

void Converter::convert_to_double(std::string &s) {
    double nbr = std::strtod(s.c_str(), nullptr);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << nbr << ".0" << std::endl;
        return ;
    }
    std::cout << nbr << std::endl;
}

void Converter::print_all_convetions(std::string &s) {
    std::cout << "char: ", convert_to_char(s);
    std::cout << "int: ", convert_to_int(s);
    std::cout << "float: ", convert_to_float(s);
    std::cout << "double: ", convert_to_double(s);
}   

bool Converter::is_valid(std::string &s) {
    if (is_pseudo_literal(s))
        return true;

    if (s.length() == 1 && isalpha(s[0])) {
        s = std::to_string(static_cast<int>(s[0]));
        return true;
    }

    for (size_t i = 0; i < s.size(); i++) {
        char c = s[i];
        if (!isdigit(c) && c != '+' && c != '-' && c != 'f' && c != '.')
            return false;
    }

    return true;
}