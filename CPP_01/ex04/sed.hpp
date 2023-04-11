/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:35:39 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 18:46:26 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

#define DEFAULT	"\033[0m"
#define RED 	"\e[0;31m"
#define GREEN 	"\e[0;32m"
#define YELLOW 	"\e[0;33m"
#define BLUE 	"\e[0;34m"
#define MAGENTA	"\e[0;35m"
#define CYAN	"\e[0;36m"
#define WHITE	"\e[0;37m"

class StringReplace {
public:
    bool replace(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif
