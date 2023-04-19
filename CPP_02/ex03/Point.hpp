/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:55:56 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 19:16:26 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point(const Fixed x, const Fixed y);
		Point( Point const & other );
		~Point();

		Point &		operator=( Point const & other );

		Fixed getX();
		Fixed getY();
	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const pt);

#endif
