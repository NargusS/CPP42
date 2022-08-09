/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:16:05 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:20:54 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Constructor of Dog" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Constructor Copy of Dog" << std::endl;
}

Dog&	Dog::operator=(const Dog &src){
	if (this == &src)
		return (*this);
	*this = src;
	return (*this);
}

AAnimal&	Dog::operator=(const AAnimal &src){
	this->_type = src.getType();
	this->_brain = src.getBrain();
	return (*this);
}

void	Dog::makeSound()const{
	std::cout << "Wouuuuuuuuuuufff Wouuuuuuuuuuuffffff" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor of Dog" << std::endl;
}

Brain*	Dog::getBrain()const{
	return (this->_brain);
}