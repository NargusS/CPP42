/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 02:50:21 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/21 16:53:33 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << this->_name << " Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Destructor Called" << std::endl;
}

void	Zombie::setname(std::string name){
	this->_name = name;
}

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

