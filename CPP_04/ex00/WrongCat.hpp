/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:02:51 by gboof             #+#    #+#             */
/*   Updated: 2023/04/22 23:29:49 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

    public:
        WrongCat();
        WrongCat(const WrongCat & other);
        WrongCat & operator=(const WrongCat & other);
        ~WrongCat();
        
        void makeSound()const;
};
#endif