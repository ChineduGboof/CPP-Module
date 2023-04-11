/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:46:46 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 00:31:10 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #ifndef ZOMBIE_HPP
// # define ZOMBIE_HPP

// # include <string>

// class Zombie {
// public:
//     Zombie();
//     Zombie(std::string name);
//     ~Zombie();
//     void setName(std::string name);
//     void announce() const;
// private:
//     std::string _name;
// };

// #endif

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"

#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif