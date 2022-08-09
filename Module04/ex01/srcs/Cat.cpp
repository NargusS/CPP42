/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:16:05 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:10:23 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Constructor of Cat" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Constructor Copy of Cat" << std::endl;
}

Cat&	Cat::operator=(const Cat &src){
	if (this == &src)
		return (*this);
	*this = src;
	return (*this);
}

Animal&	Cat::operator=(const Animal &src){
	this->_type = src.getType();
	this->_brain = src.getBrain();
	return (*this);
}

void	Cat::makeSound()const{
	std::cout << "Miaouuuuuuuuuuuuuuuuuuuu Miaouuuuuuuuuuuuu" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor of Cat" << std::endl;
}

Brain*	Cat::getBrain()const{
	return (this->_brain);
}