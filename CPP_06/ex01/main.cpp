/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:08:55 by gboof             #+#    #+#             */
/*   Updated: 2023/05/04 20:15:53 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include "data.hpp"


int main()
{
    Data data(1, 2, 3);

    uintptr_t serialized = Serializer::serialize(&data);

    Data* deserialized = Serializer::deserialize(serialized);

    std::cout << "Deserialized data: " << deserialized->x << ", " << deserialized->y << ", " << deserialized->z << std::endl;

    if (deserialized == &data) {
        std::cout << "Pointer comparison successful" << std::endl;
    } else {
        std::cout << "Pointer comparison failed" << std::endl;
    }

    return 0;
}
