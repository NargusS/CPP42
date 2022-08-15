/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:16:05 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 18:47:47 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Constructor of Dog" << std::endl;
}

Dog::Dog(const Dog &src) : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	*(this->_brain) = *(src.getBrain());
	std::cout << "Constructor Copy of Dog" << std::endl;
}

Dog&	Dog::operator=(const Dog &src){
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	*(this->_brain) = *(src.getBrain());
	return (*this);
}

Animal&	Dog::operator=(const Animal &src){
	this->_type = src.getType();
	*(this->_brain) = *(src.getBrain());
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