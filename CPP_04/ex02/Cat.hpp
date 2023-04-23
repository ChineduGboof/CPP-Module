/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:28 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 09:15:42 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:  
        Brain * _brain;
    public:
        Cat();
        Cat(const Cat & other);
        Cat & operator=(const Cat & other);
        virtual ~Cat();
        
        virtual void makeSound()const;
        Brain* getBrain() const;
};
#endif