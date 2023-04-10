/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:38:59 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/10 14:11:18 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {};

Contact::~Contact(void) {};

void Contact::setFirstName(std::string firstName) {
	this->m_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->m_lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
	this->m_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->m_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->m_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
	return this->m_firstName;
}

std::string Contact::getLastName() {
	return this->m_lastName;
}

std::string Contact::getNickname() {
	return this->m_nickname;
}

std::string Contact::getPhoneNumber() {
	return this->m_phoneNumber;
}

std::string Contact::getDarkestSecret() {
	return this->m_darkestSecret;
}