/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:28:27 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/16 16:56:07 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
#include <iostream>

class HumanB {
    private:
        std::string name;
        const Weapon *weapon;
    public:
        HumanB(const std::string &name);
        void setWeapon(const Weapon &weapon);
        void attack() const;
};

#endif
