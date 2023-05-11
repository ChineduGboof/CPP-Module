/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:58:07 by cegbulef          #+#    #+#             */
/*   Updated: 2023/05/11 17:15:49 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main() {

    // Test bsp function
    Point a(0, 0);
    Point b(0, 4);
    Point c(4, 0);
    Point inside(1, 2);
    Point outside(5, 3);
    
    std::cout << "inside point is " << (bsp(a, b, c, inside) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "outside point is " << (bsp(a, b, c, outside) ? "inside" : "outside") << " the triangle" << std::endl;
    
    return 0;
}