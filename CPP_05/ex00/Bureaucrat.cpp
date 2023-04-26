/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:46:25 by gboof             #+#    #+#             */
/*   Updated: 2023/04/26 19:46:32 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name_(name)
{
    if (grade > 1)
    {
        grade_ = grade;
    }
    else
    {
        throw GradeTooHighException();
    }

    if (grade < 150)
    {
        grade_ = grade;
    }
    else
    {
        throw GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name_(other.name_), grade_(other.grade_)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        grade_ = other.grade_;
    }

    return *this;
}

const std::string& Bureaucrat::getName() const
{
    return name_;
}

int Bureaucrat::getGrade() const
{
    return grade_;
}

void Bureaucrat::incrementGrade()
{
    if (grade_ - 1 >= 1)
    {
        grade_--;
    }
    else
    {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade()
{
    if (grade_ + 1 <= 150)
    {
        grade_++;
    }
    else
    {
        throw GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
