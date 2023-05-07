/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:00:28 by gboof             #+#    #+#             */
/*   Updated: 2023/05/07 06:21:47 by gboof            ###   ########.fr       */
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
