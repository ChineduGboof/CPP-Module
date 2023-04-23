/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:28 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 16:26:47 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{

    public:
        Cat();
        Cat(const Cat & other);
        Cat & operator=(const Cat & other);
        virtual ~Cat();
        
        void makeSound()const;
};
#endif