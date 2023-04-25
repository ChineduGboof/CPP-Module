/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:28 by gboof             #+#    #+#             */
/*   Updated: 2023/04/25 09:36:44 by cegbulef         ###   ########.fr       */
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