/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:29 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 18:09:19 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const & name, int grade): _name(name) {
    if (grade > 150){
        throw(GradeTooLowException());
    }
    else if (grade < 1){
        throw(GradeTooHighException());
    }
    else
        _grade = grade;
}


//catch an exception for if NULL is passed to name
Bureaucrat::Bureaucrat(std::string const * name, int grade) : _name("") {
    if (name == NULL || name->empty()){
        throw NullStringException();
    }
    (void)grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & other){ *this = other;}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other){
   if (this != &other) {
		const_cast<std::string&>(_name) = other._name;
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string const & Bureaucrat::getName()const{ return _name; }

int Bureaucrat::getGrade()const{ return _grade; }

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too high";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low";
}

const char * Bureaucrat::NullStringException::what() const throw(){
    return "A Null string was passed";
}


void Bureaucrat::incrementGrade(){
    if (_grade > 1){
        _grade--;
    }
    else{
        throw(GradeTooHighException());
    }
}

void Bureaucrat::decrementGrade(){
    if (_grade < 150){
        _grade++;
    }
    else{
        throw(GradeTooLowException());
    }
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & b){
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

void Bureaucrat::signForm(Form & form)
{
    try
    {
    	form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
    }
}