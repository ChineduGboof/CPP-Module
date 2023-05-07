/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:00:28 by gboof             #+#    #+#             */
/*   Updated: 2023/05/07 11:45:14 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Scalar.hpp"

int main() {
    std::string input;
    ScalarConverter converter;

    std::cout << YELLOW << "Enter a value to convert: " << DEFAULT;
    std::getline(std::cin, input);

    if (!converter.is_valid(input)) {
        std::cout << RED << "Invalid input" << DEFAULT << std::endl;
        return 1;
    }

    converter.convert(input);
    return 0;
}
