/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/05/02 17:31:53 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        std::cout << YELLOW << "GRADE TOO LOW TO SIGN TEST" << DEFAULT << std::endl;
        Form form("Contract Form", 4, 6);
        Bureaucrat bureaucrat("Chinedu", 10);
        bureaucrat.signForm(form);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "GRADE OK SIGN TEST" << DEFAULT << std::endl;
        Form form("Contract Form", 4, 6);
        Bureaucrat bureaucrat("Chinedu", 3);
        bureaucrat.signForm(form);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "GRADE BELOW MINIMUM TEST" << DEFAULT << std::endl;
        Form form("Contract Form", 151, 6);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "GRADE ABOVE MAXIMUM TEST" << DEFAULT << std::endl;
        Form form("Contract Form", 10, 0);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "BE-SIGNED GRADE TOO LOW TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Chinedu", 89);
        Form form("Contract Form", 25, 12);
        form.beSigned(bureaucrat);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "BE-SIGNED GRADE NORMAL TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Chinedu", 1);
        Form form("Contract Form", 25, 12);
        form.beSigned(bureaucrat);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
}
