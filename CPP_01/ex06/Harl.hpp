/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:06:56 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/13 10:09:48 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <functional>


#define DEFAULT	"\033[0m"
#define RED 	"\e[0;31m"
#define YELLOW 	"\e[0;33m"

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



