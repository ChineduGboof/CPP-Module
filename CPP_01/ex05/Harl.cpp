/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:06:52 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 17:42:59 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    levels["DEBUG"] = &Harl::debug;
    levels["INFO"] = &Harl::info;
    levels["WARNING"] = &Harl::warning;
    levels["ERROR"] = &Harl::error;
}

void Harl::complain(std::string level) {
    std::map<std::string, FuncPtr>::iterator it = levels.find(level);
    if (it != levels.end()) {
        (this->*(it->second))();
    } else {
        std::cout << RED "Invalid level specified: " << level << DEFAULT << std::endl;
    }
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

