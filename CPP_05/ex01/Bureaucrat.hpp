/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:26 by gboof             #+#    #+#             */
/*   Updated: 2023/05/02 16:27:52 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define DEFAULT	"\033[0m"
#define YELLOW 	"\e[0;33m"
#define GREEN	"\033[1;32m"
#define CYAN	"\033[0;36m"
#define RED 	"\e[0;31m"

#include <iostream>

class Form;

class Bureaucrat{
    private:
        std::string const _name;
        int _grade;
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
        
        Bureaucrat();
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