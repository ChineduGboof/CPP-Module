/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:28:53 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 12:28:56 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
#include <iostream>

class HumanA {
	private:
		std::string name;
		const Weapon &weapon;
		
	public:
		HumanA(const std::string &name, const Weapon &weapon);
		void attack() const;
};

#endif
