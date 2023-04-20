/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:58:07 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/20 10:51:13 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main() {
    // Test bsp function
    Point a(0, 0);
    Point b(0, 2);
    Point c(2, 0);
    Point inside(1, 1);
    Point outside(2, 1);
    
    std::cout << "inside point is " << (bsp(a, b, c, inside) ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "outside point is " << (bsp(a, b, c, outside) ? "inside" : "outside") << " the triangle" << std::endl;
    
    return 0;
}