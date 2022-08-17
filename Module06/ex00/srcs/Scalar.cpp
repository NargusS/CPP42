/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:41:11 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/13 18:30:22 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalar.hpp"

Scalar::Scalar()
{
	std::cout << "Default constructor" << std::endl;
	this->_value = 0.0;
	this->is_impossible = false;
}

Scalar::Scalar(char *arg)
{
	std::string	str(arg);
	std::cout << "constructor" << std::endl;
	this->is_impossible = false;
	if (is_char(str))
		this->_value = static_cast<double>(str[0]);
	else if (is_integer(str))
		this->_value = static_cast<double>(std::stoi(str));
	else if (is_double(str))
		this->_value = static_cast<double>(std::stod(str));
	else if (is_float(str))
		this->_value = static_cast<double>(std::stof(str));
	else
	{
		this->_value = 0.0;
		this->is_impossible = true;
	}
	
}

Scalar::Scalar(const Scalar& src)
{
	std::cout << "Copy constructor" << std::endl;
	*this = src;
}

Scalar&	Scalar::operator=(const Scalar& src){
	this->_value = src._value;
	return (*this);
}

void	Scalar::printChar(){
	std::cout << "char: ";
	if (this->is_impossible || this->_value < CHAR_MIN || this->_value > CHAR_MAX || isnan(this->_value))
		std::cout << "impossible" << std::endl;
	else if (this->_value < 32 || this->_value > 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(this->_value) << "'" << std::endl;
}

void	Scalar::printInt(){
	std::cout << "int: ";
	if (this->is_impossible || this->_value < INT_MIN || this->_value > INT_MAX || isnan(this->_value))
		std::cout << "impossible" << std::endl;
	else
		std::cout <<  static_cast<int>(this->_value) << std::endl;
}

void	Scalar::printDouble(){
	std::cout << "double: ";
	if (this->is_impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(this->_value) << std::endl;
}

void	Scalar::printFloat(){
	std::cout << "float: ";
	if (this->is_impossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) <<static_cast<float>(this->_value)<< "f" << std::endl;
}

Scalar::~Scalar()
{
}
