/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:15:06 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 22:32:41 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat&	operator=(const Cat &src);
		Animal&	operator=(const Animal &src);
		Brain*	getBrain()const;
		virtual void	makeSound()const;
};

#endif