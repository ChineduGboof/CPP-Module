/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:55:56 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/20 10:46:05 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point( Point const & other );
		~Point();

		Point &		operator=( Point const & other );
		Fixed getX();
		Fixed getY();
};

bool bsp( Point const a, Point const b, Point const c, Point const pt);

#endif
