/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:33 by gboof             #+#    #+#             */
/*   Updated: 2023/04/22 22:42:56 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{

    public:
        Dog();
        Dog(const Dog & other);
        Dog & operator=(const Dog & other);
        ~Dog();

        void makeSound()const;
};
#endif