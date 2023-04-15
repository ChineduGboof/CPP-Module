/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:33:53 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/16 00:50:26 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define DEFAULT	"\033[0m"
#define RED 	"\e[0;31m"
#define GREEN 	"\e[0;32m"
#define YELLOW 	"\e[0;33m"
#define BLUE 	"\e[0;34m"
#define MAGENTA	"\e[0;35m"
#define CYAN	"\e[0;36m"
#define WHITE	"\e[0;37m"

#include <iostream>

class Zombie {
	private:
    	std::string _name;
	public:
		Zombie();
		~Zombie();
		void announce();
		void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif