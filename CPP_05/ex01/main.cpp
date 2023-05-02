/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/05/02 17:17:36 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        std::cout << YELLOW << "NORMAL TEST" << DEFAULT << std::endl;
        Form form("Contract Form", 10, 4);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "GRADE TOO LOW TO SIGN TEST" << DEFAULT << std::endl;
        Form form("Contract Form", 4, 6);
        std::cout << form << std::endl;
        Bureaucrat bureaucrat("Chinedu", 10);
        std::cout << bureaucrat << std::endl;
        bureaucrat.signForm(form);
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "GRADE OK SIGN TEST" << DEFAULT << std::endl;
        Form form("Contract Form", 4, 6);
        std::cout << form << std::endl;
        Bureaucrat bureaucrat("Chinedu", 3);
        std::cout << bureaucrat << std::endl;
        bureaucrat.signForm(form);
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
        std::cout << bureaucrat << std::endl;
        Form form("Contract Form", 25, 12);
        std::cout << form << std::endl;
        form.beSigned(bureaucrat);
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << YELLOW << "BE-SIGNED GRADE TOO HIGH TEST" << DEFAULT << std::endl;
        Bureaucrat bureaucrat("Chinedu", 0);
        std::cout << bureaucrat << std::endl;
        Form form("Contract Form", 25, 12);
        std::cout << form << std::endl;
        form.beSigned(bureaucrat);
    }
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
}
