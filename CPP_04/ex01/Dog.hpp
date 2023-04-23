/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:33 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 19:05:08 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:  
        Brain * _brain;
    public:
        Dog();
        Dog(const Dog & other);
        Dog & operator=(const Dog & other);
        virtual ~Dog();

        virtual void makeSound()const;
        Brain* getBrain() const;
};
#endif