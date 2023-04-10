/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:26:12 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 13:59:21 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

std::string strUpper(std::string str) {
	for (std::string::size_type i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
    else {
        for (int i = 1; i < argc; i++)
            std::cout << strUpper(argv[i]);
        std::cout << std::endl;
    }
	return (0);
}