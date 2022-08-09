/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:16:05 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 21:07:07 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "Inconnu";
	std::cout << "Constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "Constructor Copy of WrongAnimal" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src){
	if (this == &src)
		return (*this);
	*this = src;
	return (*this);
}

void	WrongAnimal::makeSound()const{
	std::cout << "No sound for this WrongAnimal" << std::endl;
}

const std::string	WrongAnimal::getType()const{
	return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}