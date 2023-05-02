/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 21:01:29 by gboof             #+#    #+#             */
/*   Updated: 2023/04/28 14:04:40 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.
*/
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("default"){
    std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) 
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

//catch an exception for if NULL is passed to target
RobotomyRequestForm::RobotomyRequestForm(std::string const * target) 
    : AForm("RobotomyRequestForm", 72, 45), _target("") {
    std::cout << "RobotomyRequestForm Null Constructor called" << std::endl;
    if (target == NULL || target->empty()){
        throw NullStringException();
    }
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other) {
         std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
         *this = other;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & other){
    std::cout << "RobotomyRequestForm Copy Assignment Constructor called" << std::endl;
    if (this != &other) {
		_target = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
    if (getSign() == true && executor.getGrade() <= getExecGrade())
	{
		std::cout << YELLOW << "<DRILLING NOISES~~~~~~~~~~~~~~~~~~~~~~>" << DEFAULT << std::endl;
		std::srand(time(NULL));
		if (std::rand() % 2 == 0) {
			std::cout << GREEN << _target << " has been robotomized successfully!" << DEFAULT << std::endl;
		}
		else {
			std::cout << RED << "Robotomy on " << _target << " has failed." << DEFAULT << std::endl;
		}
	}
	else if (executor.getGrade() <= getExecGrade()) {
		throw GradeTooLowException();
	}
	else {
		throw std::out_of_range(RED "Bureaucrat cannot execute this form" DEFAULT);
	}
}