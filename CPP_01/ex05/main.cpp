/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:07:00 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/12 00:40:25 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// int main()
// {
//     Harl harl;
//     std::cout << YELLOW;
//     harl.complain("DEBUG");
//     harl.complain("INFO");
//     std::cout << RED;
//     harl.complain("WARNING");
//     harl.complain("ERROR");
//     std::cout << DEFAULT;
//     return 0;
// }

int main(void) {
	Harl harl;
    std::cout << YELLOW;
	harl.complain("DEBUG");
	harl.complain("INFO");
    std::cout << RED;
	harl.complain("WARNING");
	harl.complain("ERROR");
    return 0;
}