/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:57:11 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/21 09:04:27 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
implementation of the "point in triangle" test using the Barycentric coordinate system
The function sign computes the area of the triangle using the formula
area = (x1-x3)*(y2-y3)-(x2- x3)*(y1-y3)
If the sign of the area is positive, it means that the points are ordered in a counterclockwise direction. 
If the sign is negative, it means that the points are ordered in a clockwise direction.
If all three signs are positive or all three signs are negative, 
the point is inside the triangle, and the function returns true. 
Otherwise, the point is outside the triangle, and the function returns false.
*/

Fixed sign(Point p1, Point p2, Point p3) {
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) -
           (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const pt) {
    Fixed s1 = sign(pt, a, b);
    Fixed s2 = sign(pt, b, c);
    Fixed s3 = sign(pt, c, a);
    return (s1 >= 0 && s2 >= 0 && s3 >= 0) || (s1 <= 0 && s2 <= 0 && s3 <= 0);
}


/*
BSP stands for Binary Space Partitioning, 
which is a technique used in computer graphics and computational geometry to divide a space into smaller regions. 
It involves recursively subdividing a space by planes or other shapes to create a tree-like structure. 
This structure can then be used to efficiently determine the location of objects or points within the space, 
and to perform other operations such as collision detection or visibility determination. 
*/