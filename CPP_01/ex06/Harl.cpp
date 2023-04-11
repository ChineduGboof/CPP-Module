/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:46:50 by gboof             #+#    #+#             */
/*   Updated: 2023/04/12 00:48:33 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
	typedef void(Harl::*FuncPtr)();

	FuncPtr fs[4] = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; levels[i] != level && i < 4; i++);
	switch(i)
	{
		case (0):
			(this->*fs[i++])();
		case (1):
			(this->*fs[i++])();
		case (2):
			(this->*fs[i++])();
		case (3):
			(this->*fs[i++])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}