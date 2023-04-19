/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:58:07 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 19:20:12 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

// int main() {
//     // Create some points
//     Point p1; // default constructor
//     Point p2(1.23f, 4.56f); // constructor with parameters
//     Point p3(p2); // copy constructor
    
//     // Test getters
//     std::cout << "p1: (" << p1.getX().toFloat() << ", " << p1.getY().toFloat() << ")" << std::endl;
//     std::cout << "p2: (" << p2.getX().toFloat() << ", " << p2.getY().toFloat() << ")" << std::endl;
//     std::cout << "p3: (" << p3.getX().toFloat() << ", " << p3.getY().toFloat() << ")" << std::endl;

//     // Test bsp function
//     Point a(1, 1);
//     Point b(1, 5);
//     Point c(5, 1);
//     Point inside(3, 3);
//     Point outside(6, 6);
    
//     std::cout << "inside point is " << (bsp(a, b, c, inside) ? "inside" : "outside") << " the triangle" << std::endl;
//     std::cout << "outside point is " << (bsp(a, b, c, outside) ? "inside" : "outside") << " the triangle" << std::endl;
    
//     return 0;
// }

int main(void) {
    Point const a(Fixed(0), Fixed(0));
    Point const b(Fixed(3), Fixed(0));
    Point const c(Fixed(0), Fixed(3));
    Point const pt(Fixed(2), Fixed(2)); // out
    Point const pt2(Fixed(1), Fixed(1)); // in

    bool is_in = bsp(a, b, c, pt); 
    bool is_in2 = bsp(a, b, c, pt2);

    std::cout << "pt1: this point is" << (is_in ? " in " : "n't in ") << "the rectangle" << std::endl;
    std::cout << "pt2: this point is" << (is_in2 ? " in " : "n't in ") << "the rectangle" << std::endl;
    return 0;
}