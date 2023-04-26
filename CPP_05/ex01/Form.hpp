/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:51:53 by gboof             #+#    #+#             */
/*   Updated: 2023/04/26 19:52:22 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, const int gradeRequiredToSign, const int gradeRequiredToExecute)
    : _name(name), _signed(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw GradeTooHighException();
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other)
    : _name(other._name), _signed(other._signed), _gradeRequiredToSign(other._gradeRequiredToSign),
    _gradeRequiredToExecute(other._gradeRequiredToExecute)
{
}

Form::~Form()
{
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        _signed = other._signed;
    }
    return (*this);
}

const std::string& Form::getName() const
{
    return (_name);
}

bool Form::isSigned() const
{
    return (_signed);
}

int Form::getGradeRequiredToSign() const
{
    return (_gradeRequiredToSign);
}

int Form::getGradeRequiredToExecute() const
{
    return (_gradeRequiredToExecute);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeRequiredToSign)
    {
        _signed = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form " << form.getName() << ", signed: " << form.isSigned() << ", grade required to sign: "
        << form.getGradeRequiredToSign() << ", grade required to execute: " << form.getGradeRequiredToExecute();
    return (os);
}
