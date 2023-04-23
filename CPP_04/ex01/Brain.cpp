/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:36:49 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 18:40:30 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; i++) {
        _ideas[i] = "default";
    }
    std::cout << YELLOW << "Default Brain Constructor Called" << DEFAULT << std::endl;
}

Brain::Brain(const Brain & other) {
    for (int i = 0; i < 100; i++) {
        _ideas[i] = other._ideas[i];
    }
    std::cout << YELLOW << "Default Brain Copy Constructor Called" << DEFAULT << std::endl;
}

Brain & Brain::operator=(const Brain & other) {
    std::cout << YELLOW << "Default Brain Assignment Operator Called" << DEFAULT << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            _ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(){
    std::cout << YELLOW << "Default Brain Destructor Called" << DEFAULT << std::endl;
}

void Brain::setIdea(int i, const std::string& idea) {
    _ideas[i] = idea;
}

const std::string& Brain::getIdea(int i) const {
    return _ideas[i];
}