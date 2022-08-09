/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:49:20 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 21:06:57 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
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
	//verifier si > 150;
	this->_grade++;
}

void	Bureaucrat::getPromoted(){
	//verifier si < 1;
	this->_grade--;
}