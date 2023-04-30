/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:23 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 18:08:04 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form form("Contract Form", 10, 4);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Caught Exception: " << e.what() << std::endl;
    }
    try
    {
        Form form("Expiration Form", 4, 6);
        std::cout << form << std::endl;
    }
    catch (const std::exception& e) 
    {
        std::cout << "Caught Exception: " << e.what() << std::endl;
    }
    
}
