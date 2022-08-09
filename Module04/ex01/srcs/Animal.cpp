/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:16:05 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:09:34 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->_type = "Inconnu";
	std::cout << "Constructor of Animal" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Constructor Copy of Animal" << std::endl;
}

Animal&	Animal::operator=(const Animal &src){
	if (this == &src)
		return (*this);
	*this = src;
	return (*this);
}

void	Animal::makeSound()const{
	std::cout << "No sound for this Animal" << std::endl;
}

const std::string	Animal::getType()const{
	return (this->_type);
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal" << std::endl;
}