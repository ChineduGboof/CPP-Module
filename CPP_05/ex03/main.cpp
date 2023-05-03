/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/05/03 10:48:18 by cegbulef         ###   ########.fr       */
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



// int main(void)
// {
//     Intern someRandomIntern;
//     AForm *rrf;
//     try {
//         rrf = someRandomIntern.makeForm(NULL, "Chinedu");
//     }
//     catch (const std::logic_error& e) {
//         std::cout << "Caught exception: " << e.what() << std::endl;
//         return 1;
//     }

//     Bureaucrat b = Bureaucrat("benjamin", 1);
//     b.signAForm(*rrf);
//     b.executeForm(*rrf);
//     delete rrf;

//     return 0;
// }
