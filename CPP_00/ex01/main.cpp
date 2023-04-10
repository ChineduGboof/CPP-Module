/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:39:05 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 16:44:58 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
	Phonebook phonelist;
	std::string todo;

	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);

	std::cout << BLUE WELCOME DEFAULT << std::endl;
	while (std::cout << "PhoneBook📞: " && std::getline(std::cin, todo)) {
		if (!todo.compare("ADD")) {
			std::cout << GREEN ADD DEFAULT << std::endl;
			phonelist.addContact();
		}
		else if (!todo.compare("SEARCH")) {
			std::cout << GREEN SEARCH DEFAULT << std::endl;
			phonelist.displayContact();
		}
		else if (!todo.compare("EXIT")) {
			std::cout << YELLOW EXIT DEFAULT << std::endl;
			break;
		}
		else {
			std::cerr << RED ERROR DEFAULT << std::endl;
		}
	}
	return (0);
}