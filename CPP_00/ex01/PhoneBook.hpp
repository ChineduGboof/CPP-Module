/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 08:39:14 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/09 20:37:23 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <csignal>
#include <sstream>
#include "Contact.hpp"

/*	#	Color Codes	#	*/
#define DEFAULT	"\033[0m"
#define RED 	"\e[0;31m"
#define GREEN 	"\e[0;32m"
#define YELLOW 	"\e[0;33m"
#define BLUE 	"\e[0;34m"
#define MAGENTA	"\e[0;35m"
#define CYAN	"\e[0;36m"
#define WHITE	"\e[0;37m"

#define WELCOME "\n\t\tMINI-PHONEBOOK\n\nPlease enter one of the following commands: \n" \
				"ADD\t = Adds a new contact\n" \
				"SEARCH\t = Searches for an existing contact\n" \
				"EXIT\t = Exits the program\n"

#define ADD			"Adding New Contact ✔️"
#define SEARCH		"Contact Information 🔍"
#define EXIT		"Bye 🏳️"
#define ERROR		"Please Enter a Valid Task! (Add or Search or Exit)"
#define MAX 8

class Phonebook {
private:
		Contact m_contacts[8];
		int		m_max_contacts;
		void 	get_contact(int index);
public:
		Phonebook();
		~Phonebook();

		void	addContact();
		void	displayContact();
};

#endif