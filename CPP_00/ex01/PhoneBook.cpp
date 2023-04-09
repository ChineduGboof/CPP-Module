/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:39:11 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/09 14:24:04 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook() {
	this->m_index = 0;
}

Phonebook::~Phonebook() {};

bool	Phonebook::addContact() {
	if (this->m_index >= 0 && this->m_index <= 8){
		
		this->m_index++;
		return (true);
	} else {
		std::cout << RED "Contact list not Updated!" DEFAULT << std::endl;
		return (false);
	}
}

bool	Phonebook::displayContact() {

	return (false);
}