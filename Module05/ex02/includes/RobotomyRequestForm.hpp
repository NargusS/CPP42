/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:53:00 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 15:25:48 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "./Form.hpp"
#include <fstream>
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		virtual void	execute(Bureaucrat const &executor)const;
		class	RobotomyzeFailed : public std::exception{
			public:
				const char*	what() const throw ();
		};
	private:
		std::string _target;
};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {

	Form::operator=(src);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

const char*	RobotomyRequestForm::RobotomyzeFailed::what() const throw(){
	return "Operation failed";
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!(this->getIsSign()))
		throw IsNotSigned();
	else if (this->getGradeForExec() < executor.getGrade())
		throw GradeTooLowForExec();
	else{
		std::srand(time(NULL));
		int choice = std::rand() % 2;
		std::cout << "Noise of drill" << std::endl;
		if (choice == 0)
			std::cout << this->_target << " was robotomyze" << std::endl;
		else
			throw	RobotomyzeFailed();
	}
}

#endif