/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:46:43 by gboof             #+#    #+#             */
/*   Updated: 2023/04/26 19:48:30 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat("Bob", 1);
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat("Alice", 160);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
