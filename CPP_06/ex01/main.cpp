/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:08:55 by gboof             #+#    #+#             */
/*   Updated: 2023/05/07 06:20:24 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include "data.hpp"

int main()
{
    Data data = {1, 2, 3};

    uintptr_t serialized = Serializer::serialize(&data);

    Data* deserialized = Serializer::deserialize(serialized);

    std::cout << "Deserialized data: " << deserialized->a << ", " << deserialized->b << ", " << deserialized->c << std::endl;

    if (deserialized == &data) {
        std::cout << GREEN << "Pointer comparison successful" << DEFAULT << std::endl;
        std::cout << GREEN << deserialized << std::endl;
        std::cout << &data <<  DEFAULT << std::endl;
        std::cout <<  YELLOW << data.a <<  std::endl;
        std::cout <<  data.b <<  std::endl;
        std::cout <<  data.c <<  DEFAULT << std::endl;
    } else {
        std::cout << RED << "Pointer comparison failed" << DEFAULT << std::endl;
    }

    return 0;
}
