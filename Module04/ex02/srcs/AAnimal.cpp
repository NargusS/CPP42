/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:13:16 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:32:07 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	this->_type = "Inconnu";
	std::cout << "Constructor of AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	*this = src;
	std::cout << "Constructor Copy of AAnimal" << std::endl;
}

const std::string	AAnimal::getType()const{
	return (this->_type);
}

AAnimal::~AAnimal(){
	std::cout << "Destructor of AAnimal" << std::endl;
}