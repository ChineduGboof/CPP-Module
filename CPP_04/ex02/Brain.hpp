/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:36:46 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 08:50:28 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
    private:  
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain & other);
        Brain & operator=(const Brain & other);
        ~Brain();
        void setIdea(int i, const std::string& idea);
        const std::string& getIdea(int i) const;
};
#endif