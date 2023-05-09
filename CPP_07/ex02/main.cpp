/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:41:30 by gboof             #+#    #+#             */
/*   Updated: 2023/05/09 07:45:03 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/*
checks: 
1. check if one passes a negative number
2. Check if a null is passed
3. Check if a more than max int is passed

*/
int main(void)
{
    // Integer test
    Array<int> ints(10);
    ints[0] = 1;
    ints[1] = 2;
    ints[2] = 3;
    ints[3] = 4;
    ints[4] = 5;
    ints[5] = 6;
    std::cout << ints[0] << std::endl
              << ints[1] << std::endl
              << ints[2] << std::endl
              << ints[3] << std::endl
              << ints[4] << std::endl
              << ints[5] << std::endl;

    // String test
    Array<std::string> strs(4);
    strs[0] = "Oh";
    strs[1] = "Hi";
    strs[2] = "Mark";
    std::cout << strs[0] << std::endl << strs[1] << std::endl << strs[2] << std::endl;

    // Copy constructor test
    Array<std::string> strCopy(strs);
    strCopy[1] = "Hello";
    std::cout << "Printing original" << std::endl;
    std::cout << strs[0] << std::endl << strs[1] << std::endl << strs[2] << std::endl;
    std::cout << "Printing copy" << std::endl;
    std::cout << strCopy[0] << std::endl
              << strCopy[1] << std::endl
              << strCopy[2] << std::endl;

    // Copy assignment constructor test
    Array<std::string> strCopy2;
    strCopy2 = strs;
    strCopy2[1] = "Hello";
    std::cout << "Printing original" << std::endl;
    std::cout << strs[0] << std::endl << strs[1] << std::endl << strs[2] << std::endl;
    std::cout << "Printing copy" << std::endl;
    std::cout << strCopy2[0] << std::endl
              << strCopy2[1] << std::endl
              << strCopy2[2] << std::endl;

    // Empty array test
    Array<std::string> empty;
    try
    {
        empty[0];
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    // Out of bounds access test
    // try
    // {
    //     strCopy[4];
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // const Array<int> a(3);

    // a[0] = 3;
    // std::cout << a[0] << std::endl;
}
