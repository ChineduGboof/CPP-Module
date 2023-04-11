/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:28:27 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 12:28:43 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
#include <iostream>

class HumanB {
    public:
        HumanB(const std::string &name);
        void setWeapon(const Weapon &weapon);
        void attack() const;

    private:
        std::string name;
        const Weapon *weapon;
};

#endif
