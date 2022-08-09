/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:15:06 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 21:09:12 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "./Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog&	operator=(const Dog &src);
		virtual void	makeSound()const;
};



#endif