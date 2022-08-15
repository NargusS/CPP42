/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:49:20 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/10 17:05:28 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Stagiaire"), _grade(150)
{
	std::cout << "New Stagiaire" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "New Employe in company" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	return;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src){
	
	this->_grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName()const{
	return (this->_name);
}

int	Bureaucrat::getGrade()const{
	return (this->_grade);
}

void	Bureaucrat::getRetrograded(){
	try
	{
		if (this->_grade == 150)
			throw GradeTooLowException();
		this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot be more retrograded" << '\n';
	}
	
}

void	Bureaucrat::getPromoted(){
	try
	{
		if (this->_grade == 1)
			throw GradeTooHighException();
		this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot be more promoted"<< '\n';
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& Employe){
	os << Employe.getName() << ", bureaucrat grade " << Employe.getGrade() << ".";
	return os;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too High";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too Low";
}