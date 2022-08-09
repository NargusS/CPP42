/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:15:06 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:42:31 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "./Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &src);
		virtual ~Animal();
		Animal&	operator=(const Animal &src);
		const std::string	getType()const;
		virtual void	makeSound()const;
		virtual Brain*	getBrain() const = 0;
};



#endif