/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:22:44 by gboof             #+#    #+#             */
/*   Updated: 2023/05/08 16:21:55 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"


template <typename T>

T const & max(T const & x, T const & y){
    return (x >= y ? x : y );
}

template <typename T>

T const & min(T const & x, T const & y){
    return (x <= y ? x : y );
}

template <typename T>

void swap(T & x, T & y){
    T temp =  x;
    x = y;
    y = temp;
}

#endif