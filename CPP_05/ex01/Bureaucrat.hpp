/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:26 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 18:04:33 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat{
    private:
        std::string const _name;
        int _grade;
        Bureaucrat();
    public:
        class GradeTooHighException: public std::exception
        {
            public:  
                virtual const char * what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:  
                virtual const char * what() const throw();
        };

        class NullStringException: public std::exception
        {
            public:  
                virtual const char * what() const throw();
        };
        Bureaucrat(Bureaucrat const & other);
        Bureaucrat & operator=(Bureaucrat const & other);
        Bureaucrat(std::string const & name, int grade);
        Bureaucrat(std::string const * name, int grade);
        ~Bureaucrat();

        std::string const & getName()const;
        int getGrade()const;

        void incrementGrade();
        void decrementGrade();

        void signForm(Form & form);
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b);

#include "Form.hpp"
#endif