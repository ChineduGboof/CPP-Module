/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:25:58 by gboof             #+#    #+#             */
/*   Updated: 2023/05/08 18:37:22 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"

template <typename T>
void iter(T arr[], size_t arrlen, void (*arrFunc)(T const &)){
    for (size_t i = 0; i < arrlen; i++){
        arrFunc(arr[i]);
    }
}


#endif
