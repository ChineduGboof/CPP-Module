/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:26 by gboof             #+#    #+#             */
/*   Updated: 2023/05/02 19:32:16 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
#define INTERN_HPP

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"
#define GREEN	"\033[1;32m"
#define CYAN	"\033[0;36m"
#define RED 	"\e[0;31m"

#include <iostream>

class AForm;

class Intern{
    private:
        Form *form[3];
    public:
        Intern();
        Intern(Intern const & other);
        Intern & operator=(Intern const & other);
        ~Intern();

        AForm * makeForm(std::string formName, std::string target);
};

#include "AForm.hpp"
#endif