/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:06:56 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 17:41:32 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map>
#include <functional>
#include <string>

#define DEFAULT	"\033[0m"
#define RED 	"\e[0;31m"
#define GREEN 	"\e[0;32m"
#define YELLOW 	"\e[0;33m"
#define BLUE 	"\e[0;34m"
#define MAGENTA	"\e[0;35m"
#define CYAN	"\e[0;36m"
#define WHITE	"\e[0;37m"

class Harl {
private:
    typedef void (Harl::*FuncPtr)(void);
    std::map<std::string, FuncPtr> levels;

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl();
    void complain(std::string level);
};

#endif



