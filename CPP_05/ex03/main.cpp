/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/05/03 21:50:31 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
        Intern someRandomIntern;
        AForm *rrf;
        rrf = someRandomIntern.makeForm("Presidential Pardon", "Chinedu");
        Bureaucrat b = Bureaucrat("benjamin", 1);
        b.signAForm(*rrf);
        b.executeForm(*rrf);
        delete rrf;
}
