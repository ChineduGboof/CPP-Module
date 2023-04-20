/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:56:36 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/20 10:46:37 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0),_y(0) {
}

Point::Point(const Fixed x, const Fixed y):_x(x), _y(y) {
}

Point::Point( const Point & other ):_x(other._x), _y(other._y) {
}

Point::~Point() {
}

/*
    // The _x and _y attributes are const, so we cannot modify them directly.
    // Instead, we can use the assignment operator of the Fixed class to set
    // the value of a new Fixed object and then assign it to the const attribute.

*/
Point &				Point::operator=( Point const & other ) {
	 if (this != &other) {
    (Fixed) this->_x = (Fixed) other._x;
	(Fixed) this->_y = (Fixed) other._y;
    }
	return *this;
}

Fixed Point::getX() {
	return this->_x;
}

Fixed Point::getY() {
	return this->_y;
}