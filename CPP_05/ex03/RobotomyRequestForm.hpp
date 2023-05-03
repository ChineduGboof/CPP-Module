/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:06:22 by gboof             #+#    #+#             */
/*   Updated: 2023/05/02 16:40:40 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
    private:
        std::string _target;
    public: 
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const & other);
        RobotomyRequestForm(std::string const & target);
        RobotomyRequestForm(std::string const * target);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & other);
        ~RobotomyRequestForm();

        void execute(const Bureaucrat& executor) const;
};

#endif
