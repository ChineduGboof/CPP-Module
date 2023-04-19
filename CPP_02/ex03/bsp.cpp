/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:57:11 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 19:18:13 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed s(Point p1, Point p2, Point p3) {
    return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())) -
            ((p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

// Compute the signs of the areas of the three triangles formed by the point and the vertices of the triangle.
bool bsp( Point const a, Point const b, Point const c, Point const pt) {
    Fixed s1 = s(pt, a, b);
    Fixed s2 = s(pt, b, c);
    Fixed s3 = s(pt, c, a);
     // If the signs are all positive or negative, the point is inside the triangle.
    return (s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0);
}