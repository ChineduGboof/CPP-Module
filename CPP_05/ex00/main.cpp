/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 14:44:04 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Chinedu", 10);
        Bureaucrat bureaucrat2("Tanvir", 7);
        bureaucrat2.decrementGrade();
        bureaucrat.incrementGrade();
        // bureaucrat = bureaucrat2;
        // Bureaucrat bureaucrat("Chinedu", -1); // segmentation fault
        // Bureaucrat bureaucrat("Chinedu", 151); // segmentation fault
        // Bureaucrat bureaucrat("", 50); // segmentation fault
        // Bureaucrat bureaucrat(NULL, 50); // segmentation fault

        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat2 << std::endl;

    }
    catch (const std::exception& e) 
    {
        std::cout << "Caught Exception: " << e.what() << std::endl;
    }
}