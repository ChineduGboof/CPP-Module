/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:27:52 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/11 12:27:57 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string &type) {
    this->type = type;
}
