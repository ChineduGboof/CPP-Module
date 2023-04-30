/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:29 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 14:04:40 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("default"), _sign(false), _signGrade(150), _execGrade(150){}

Form::Form(std::string const & name, int const signGrade, int const execGrade)
        : _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade) {
    if (signGrade > 150 || execGrade > 150){
        throw(GradeTooLowException());
    }
    else if (signGrade < 1 || execGrade < 1){
        throw(GradeTooHighException());
    }
}

//catch an exception for if NULL is passed to name
Form::Form(std::string const * name, int const signGrade, int const execGrade) 
        : _name(""), _sign(false), _signGrade(signGrade), _execGrade(execGrade) {
    if (name == NULL || name->empty()){
        throw NullStringException();
    }
    (void)signGrade;
    (void)execGrade;
}

Form::Form(Form const & other)
    : _name(other._name), _sign(other._sign), _signGrade(other._signGrade), _execGrade(other._execGrade){}

Form & Form::operator=(Form const & other){
   if (this != &other) {
		const_cast<std::string&>(_name) = other._name;
		_sign = other._sign;
        const_cast<int&>(_signGrade) = other._signGrade;
        const_cast<int&>(_execGrade) = other._execGrade;
	}
	return *this;
}

Form::~Form(){}

std::string const & Form::getName()const{ return _name; }

int Form::getSignGrade()const{ return _signGrade; }

bool Form::getSign()const{ return _sign; }

int Form::getExecGrade()const { return _execGrade; }

const char * Form::GradeTooHighException::what() const throw(){
    return "Grade is too high";
}

const char * Form::GradeTooLowException::what() const throw(){
    return "Grade is too low";
}

const char * Form::NullStringException::what() const throw(){
    return "A Null string was passed";
}

void Form::beSigned(Bureaucrat const & bureaucrat){
    if (bureaucrat.getGrade() <= _signGrade){
        _sign = true;
    }
    else {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form " << form.getName() << ", signed: " << form.getSign() << ", grade required to sign: "
        << form.getSignGrade() << ", grade required to execute: " << form.getExecGrade();
    return (os);
}
