/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:41:30 by gboof             #+#    #+#             */
/*   Updated: 2023/05/09 10:29:48 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
//what happens if one creates an empty array

int main() {

    try {
    // Create an array of integers
    Array<int> arr(6);
    for (unsigned int i = 0; i < arr.size(); i++) {
        arr[i] = i;
    }

    // Print the elements of the array
    std::cout << YELLOW << "Test 1" << DEFAULT << std::endl;
    for (unsigned int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Copy the array
    Array<int> arr2 = arr;

    // Change the first element of arr
    arr[0] = 10;

    // Print the elements of arr and arr2
    std::cout << YELLOW << "DEEP COPY TEST" << DEFAULT << std::endl;
    std::cout << GREEN << "arr: " << DEFAULT;
    for (unsigned int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << GREEN << "arr2: " << DEFAULT;
    for (unsigned int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // Access out-of-bounds index
    std::cout << YELLOW << "OUT OF BOUNDS TEST" << DEFAULT << std::endl;
    std::cout << arr[0] << std::endl;
    // Test empty array
    Array<int> arr1;
    std::cout << YELLOW << "EMPTY ARRAY TEST" << DEFAULT << std::endl;
    std::cout << GREEN << "Size of arr1: " << arr1.size() << DEFAULT << std::endl;
        std::cout << arr1[10] << std::endl; // Should throw out_of_range exception
    }
    catch (std::exception &e) {
        std::cerr << RED << e.what() << DEFAULT << std::endl;
    }
    return 0;
}
