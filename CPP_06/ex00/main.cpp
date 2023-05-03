/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:00:28 by gboof             #+#    #+#             */
/*   Updated: 2023/05/03 22:34:11 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Scalar.hpp"

int main() {
    std::string input;
    Converter converter;

    std::cout << "Enter a value to convert: ";
    std::getline(std::cin, input);

    if (!converter.is_valid(input)) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    converter.print_all_convetions(input);

    return 0;
}
