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

#ifndef INTERN_HPP
#define INTERN_HPP

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"
#define GREEN	"\033[1;32m"
#define CYAN	"\033[0;36m"
#define RED 	"\e[0;31m"

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    private:
        AForm * (Intern::*funcPtr[3])(std::string target);
        AForm * makeShrubberyForm(std::string target);
        AForm * makeRobotomyForm(std::string target);
        AForm * makePresidentialForm(std::string target);
    public:
        Intern();
        Intern(const Intern & other);
        Intern &operator=(const Intern & other);
        ~Intern();

        AForm * makeForm(std::string const & formName, std::string const & formTarget);
};

#endif
