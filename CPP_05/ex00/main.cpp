/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 13:23:20 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Chinedu", 150);
        Bureaucrat bureaucrat2("Gboof", 70);
        // bureaucrat.decrementGrade();
        // bureaucrat = bureaucrat2;
        // Bureaucrat bureaucrat("Chinedu", -1); // segmentation fault
        // Bureaucrat bureaucrat("Chinedu", 151); // segmentation fault
        // Bureaucrat bureaucrat("", 50); // segmentation fault
        // Bureaucrat bureaucrat(NULL, 50); // segmentation fault

        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat2 << std::endl;

    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Caught GradeTooHighException: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Caught GradeTooLowException: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::NullStringException& e)
    {
        std::cout << "Caught NullStringException: " << e.what() << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}