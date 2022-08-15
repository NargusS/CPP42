/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:30:39 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 13:47:23 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : _name("Default"), _isSign(false), _gradeForSign(1), _gradeForExec(150)
{
	std::cout << "New Form" << std::endl;
}

Form::Form(std::string name, int gradeForSign, int gradeForExec) : _name(name), _isSign(false), _gradeForSign(gradeForSign), _gradeForExec(gradeForExec)
{
	if (gradeForSign < 1 || gradeForExec < 1)
		throw GradeTooHighException();
	else if (gradeForSign > 150 || gradeForExec > 150)
		throw GradeTooLowException();
	std::cout << "New Form" << std::endl;
}

Form::Form(const Form &src){
	this->_isSign = src._isSign;
	this->_gradeForSign = src._gradeForSign;
	this->_gradeForExec = src._gradeForExec;
	return;
}

Form&	Form::operator=(const Form& src){
	this->_isSign = src._isSign;
	this->_gradeForSign = src._gradeForSign;
	this->_gradeForExec = src._gradeForExec;
	return (*this);
}

Form::~Form()
{
}

void	Form::beSigned(Bureaucrat &emp){
	if (emp.getGrade() <= this->getGradeForSign())
		this->_isSign = true;
	else
		throw GradeTooLowException();
}

std::string	Form::getName()const{
	return (this->_name);
}

int	Form::getGradeForSign()const{
	return (this->_gradeForSign);
}

int	Form::getGradeForExec()const{
	return (this->_gradeForExec);
}

bool	Form::getIsSign()const{
	return (this->_isSign);
}

const char*	Form::GradeTooHighException::what() const throw(){
	return "Grade too High";
}

const char*	Form::GradeTooLowException::what() const throw(){
	return "Grade too Low";
}

std::ostream&	operator<<(std::ostream& os, const Form& Formulaire){
	os << Formulaire.getName() << " grade for sign: " << Formulaire.getGradeForSign() << " grade for exec " << Formulaire.getGradeForExec();
	return (os);
}