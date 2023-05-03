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
#include "Form.hpp"

class Intern {
    private:
        static Form *newShrubberyCreationForm(std::string const &target);
        static Form *newRobotomyRequestForm(std::string const &target);
        static Form *newPresidentialPardonForm(std::string const &target);
        static Form *(*formCreationFunctions[3])(std::string const &target);

    public:
        Intern();
        Intern(const Intern & other);
        ~Intern();

        Intern &operator=(const Intern & other);

        AForm *makeForm(std::string const &formName, std::string const &target);
};

#endif
