/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:06:56 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/12 00:45:08 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <functional>


#define DEFAULT	"\033[0m"
#define RED 	"\e[0;31m"
#define YELLOW 	"\e[0;33m"

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif



