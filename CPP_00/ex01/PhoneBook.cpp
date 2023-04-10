/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:39:11 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 18:24:29 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook() {
	this->m_max_contacts = 0;
}

Phonebook::~Phonebook() {};

static std::string getInput(std::string prompt) {
    std::string input;
    while (true) {
        std::cout << prompt;
        if (!std::getline(std::cin, input)) {
            std::cout << YELLOW EXIT DEFAULT << std::endl;
            exit (1);
        }
        if (std::cin.fail() && std::cin.eof()) {
            std::cout << "CTRL+D was triggered" << std::endl;
            std::cout << YELLOW EXIT DEFAULT << std::endl;
            exit(0);
        } else if (!input.empty()) {
            return input;
        } else {
            std::cout << RED "Error: Please enter a non-empty string." DEFAULT << std::endl;
        }
    }
}

void Phonebook::addContact() {
	Contact contact;
	contact.setFirstName(getInput("First Name : "));
	contact.setLastName(getInput("Last Name : "));
	contact.setNickname(getInput("Nickname : "));
	contact.setPhoneNumber(getInput("Phone number : "));
	contact.setDarkestSecret(getInput("Darkest Secret : "));
	this->m_contacts[m_max_contacts++ % 8] = contact;
}

void Phonebook::get_contact(int index) {
	if (index < 0 || index >= m_max_contacts) {
		std::cout << RED "Error: Invalid index" DEFAULT<< std::endl;
		return;
	}
	
	Contact& contact = m_contacts[index];
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

void Phonebook::displayContact() {
	std::cout << std::setw(10) << "Index" << " | ";
	std::cout << std::setw(10) << "First name" << " | ";
	std::cout << std::setw(10) << "Last name" << " | ";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	for (int i = 0; i < std::min(m_max_contacts, MAX); i++) {
		Contact& contact = this->m_contacts[i];
		std::cout << std::setw(10) << i << " | ";
		std::cout << std::setw(10) << std::right << (contact.getFirstName().length() > 10 ? contact.getFirstName().substr(0, 9) + "." : contact.getFirstName()) << " | ";
		std::cout << std::setw(10) << std::right << (contact.getLastName().length() > 10 ? contact.getLastName().substr(0, 9) + "." : contact.getLastName()) << " | ";
		std::cout << std::setw(10) << std::right << (contact.getNickname().length() > 10 ? contact.getNickname().substr(0, 9) + "." : contact.getNickname()) << std::endl;
	}
	
	int index = -1;
	while (true) {
		std::cout << CYAN "Enter index of contact to display: " DEFAULT;
		std::string input;
		if (!std::getline(std::cin, input)) {
			std::cout << YELLOW EXIT DEFAULT << std::endl;
			exit (1);
		}
		std::istringstream ss(input);
		if (input.length() > 1 || !(ss >> index) || index < 0 || index >= m_max_contacts) {
       		std::cout << RED "Error: Invalid input" DEFAULT << std::endl;
			return ;
    	} else {
        break;
    	}
	}
	get_contact(index);
}
