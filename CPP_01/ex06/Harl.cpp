/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:46:50 by gboof             #+#    #+#             */
/*   Updated: 2023/04/13 10:09:35 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	this->m_level[0] = "DEBUG";
	this->m_level[1] = "INFO";
	this->m_level[2] = "WARNING";
	this->m_level[3] = "ERROR";
	this->fPtr[0] = &Harl::debug;
	this->fPtr[1] = &Harl::info;
	this->fPtr[2] = &Harl::warning;
	this->fPtr[3] = &Harl::error;
}

Harl::~Harl() {}

void Harl::debug() {
	 std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info() {
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning() {
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error() {
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n";
}
void Harl::complain(std::string level) {
	int i;

	for (i = 0; i < 4; i++) {
		if (!m_level[i].compare(level)) { 
			break;
		}
	}
	switch (i) {
		case 0:
			(this->*fPtr[0])();
			// intentional fall-through
		case 1:
			(this->*fPtr[1])();
			// intentional fall-through
		case 2:
			(this->*fPtr[2])();
			// intentional fall-through
		case 3:
			(this->*fPtr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
