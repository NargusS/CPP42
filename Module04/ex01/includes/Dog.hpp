/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:15:06 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 22:25:02 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog&	operator=(const Dog &src);
		Animal&	operator=(const Animal &src);
		Brain*	getBrain()const;
		virtual void	makeSound()const;
};



#endif