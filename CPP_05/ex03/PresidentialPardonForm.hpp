/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:06:22 by gboof             #+#    #+#             */
/*   Updated: 2023/05/02 16:40:40 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    private:
        std::string _target;
    public: 
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & other);
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(std::string const * target);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & other);
        ~PresidentialPardonForm();

        void execute(const Bureaucrat& executor) const;
};

#endif
