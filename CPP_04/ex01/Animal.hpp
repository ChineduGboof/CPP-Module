/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:20 by gboof             #+#    #+#             */
/*   Updated: 2023/04/22 22:50:22 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"
#define GREEN	"\033[1;32m"
#define CYAN	"\033[0;36m"
#define RED 	"\e[0;31m"

class Animal {
    protected:
        std::string _type;
    public:   
        Animal();
        Animal(const Animal & other);
        Animal & operator=(const Animal & other);
        virtual ~Animal();

        virtual void makeSound()const;
        const std::string &getType()const;
};

#endif