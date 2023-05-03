/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 04:51:59 by cegbulef          #+#    #+#             */
/*   Updated: 2023/05/03 05:00:13 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* Intern::makeForm(const std::string& name, const std::string & target) {
    const char* formNames[] = { "shrubbery request", "robotomy request", "presidential pardon" };
    Form* (Intern::*formFuncs[])(const std::string&) = { &Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm };
    int numForms = sizeof(formNames) / sizeof(formNames[0]);

    for (int i = 0; i < numForms; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*formFuncs[i])(target);
        }
    }

    std::cout << "Error: Form " << name << " does not exist" << std::endl;
    return NULL;
}

Form* Intern::makeShrubberyForm(const std::string & target) {
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyForm(const std::string & target) {
    return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentialForm(const std::string & target) {
    return new PresidentialPardonForm(target);
}
