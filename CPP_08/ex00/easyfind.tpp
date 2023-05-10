/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:34:38 by gboof             #+#    #+#             */
/*   Updated: 2023/05/10 11:08:10 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

//checks the container for the value and returns true if it sees the value 
//returns false if pointer returns the end value


template<typename T>
int easyfind(T & container, int value){
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        return (-1);
    return (std::distance(container.begin(), it));
}


#endif