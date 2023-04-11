/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:46:13 by gboof             #+#    #+#             */
/*   Updated: 2023/04/12 00:49:26 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *argv[]) {
	if (ac != 2) {
		std::cout << "no enough args" << std::endl;
		return 0;
	}
	Harl harl;
	std::string level(argv[1]);
	harl.complain(level);
}