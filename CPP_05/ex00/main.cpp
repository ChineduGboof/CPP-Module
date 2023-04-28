/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 12:39:48 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Chinedu", 150);
        Bureaucrat bureaucrat2(NULL, 70);
        // bureaucrat.decrementGrade();
        // bureaucrat = bureaucrat2;
        
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