/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:34:38 by gboof             #+#    #+#             */
/*   Updated: 2023/05/10 12:39:21 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

//checks the container for the value and returns -1 if not found
//returns the index if found


template<typename T>
int easyfind(T & container, int value){
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        return (-1);
    return (std::distance(container.begin(), it));
}


#endif