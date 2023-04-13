/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:06:56 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/13 10:21:30 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <functional>


#define DEFAULT	"\033[0m"
#define RED 	"\e[0;31m"
#define YELLOW 	"\e[0;33m"
#define DEBUG	"DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO	"INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING	"WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR	"ERROR: This is unacceptable! I want to speak to the manager now."
#define FAIL	"[ Probably complaining about insignificant problems ]"

class Harl {
	private:
		std::string m_level[4];
		void debug();
		void info();
		void warning ();
		void error();
		void (Harl::*fPtr[4])();
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};
#endif



