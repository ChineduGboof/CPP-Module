/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:51:14 by gboof             #+#    #+#             */
/*   Updated: 2023/04/26 19:51:18 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeRequiredToSign;
        const int _gradeRequiredToExecute;
    public:
        Form(const std::string& name, const int gradeRequiredToSign, const int gradeRequiredToExecute);
        Form(const Form& other);
        virtual ~Form();
        Form& operator=(const Form& other);

        const std::string& getName() const;
        bool isSigned() const;
        int getGradeRequiredToSign() const;
        int getGradeRequiredToExecute() const;
        void beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
