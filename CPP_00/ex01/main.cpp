/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:39:05 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 00:31:35 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string strUpper(std::string str) {
	for (std::string::size_type i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

int main(void) {
	Phonebook phonelist;
	std::string todo;

	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);

	std::cout << BLUE WELCOME DEFAULT << std::endl;
	while (std::cout << "PhoneBook📞: " && std::getline(std::cin, todo)) {
		if (!strUpper(todo).compare("ADD")) {
			std::cout << GREEN ADD DEFAULT << std::endl;
			phonelist.addContact();
		}
		else if (!strUpper(todo).compare("SEARCH")) {
			std::cout << GREEN SEARCH DEFAULT << std::endl;
			phonelist.displayContact();
		}
		else if (!strUpper(todo).compare("EXIT")) {
			std::cout << YELLOW EXIT DEFAULT << std::endl;
			break;
		}
		else {
			std::cerr << RED ERROR DEFAULT << std::endl;
		}
	}
	return (0);
}