/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:46:13 by gboof             #+#    #+#             */
/*   Updated: 2023/04/13 10:11:09 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl harl;

	if (argc != 2) {
		std::cerr << "no enough args" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}