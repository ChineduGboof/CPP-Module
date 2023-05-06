/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:08:55 by gboof             #+#    #+#             */
/*   Updated: 2023/05/06 23:05:19 by gboof            ###   ########.fr       */
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
        std::cout << "Pointer comparison successful" << std::endl;
        std::cout <<  deserialized <<  std::endl;
        std::cout <<  &data <<  std::endl;
        std::cout <<  data.a <<  std::endl;
        std::cout <<  data.b <<  std::endl;
        std::cout <<  data.c <<  std::endl;
    } else {
        std::cout << "Pointer comparison failed" << std::endl;
    }

    return 0;
}
