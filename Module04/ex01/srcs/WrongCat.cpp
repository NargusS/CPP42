/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:16:05 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 21:15:31 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Constructor of WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
	std::cout << "Constructor Copy of WrongCat" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &src){
	if (this == &src)
		return (*this);
	*this = src;
	return (*this);
}

void	WrongCat::makeSound()const{
	std::cout << "Wrong Miaouuuuuuuuuuuuuuuuuuuu Miaouuuuuuuuuuuuu" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat" << std::endl;
}