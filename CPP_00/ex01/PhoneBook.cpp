/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:39:11 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 00:27:08 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook() {
	this->m_max_contacts = 0;
}

Phonebook::~Phonebook() {};

static std::string getInput(std::string prompt) {
	std::string input;
	std::cout << prompt;

	std::getline(std::cin, input);
	if (std::cin.fail() && std::cin.eof()) {
		std::cout << "CTRL+D was triggered" << std::endl;
		std::cout << YELLOW EXIT DEFAULT << std::endl;
		exit(0);
	} else {
		return input;
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

void	Phonebook::displayContact() {
    std::cout << "Index | First name   | Last name    | Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < std::min(m_max_contacts, MAX); i++) {
        Contact& contact = this->m_contacts[i];
        std::cout << std::setw(5) << i << " | ";
        std::cout << std::setw(12) << std::left << contact.getFirstName().substr(0, 10) << " | ";
        std::cout << std::setw(12) << std::left << contact.getLastName().substr(0, 10) << " | ";
        std::cout << std::setw(12) << std::left << contact.getNickname().substr(0, 10) << std::endl;
    }
    
    int index = -1;
    while (true) {
        std::cout << CYAN "Enter index of contact to display: " DEFAULT;
        std::string input;
        std::getline(std::cin, input);
        std::stringstream ss(input);
        if (ss >> index && index >= 0 && index < m_max_contacts) {
            break;
        }
        std::cout << RED "Error: Invalid Index" DEFAULT<< std::endl;
    }
    get_contact(index);
};
