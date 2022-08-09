/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:15:06 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:20:05 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat&	operator=(const Cat &src);
		AAnimal&	operator=(const AAnimal &src);
		Brain*	getBrain()const;
		virtual void	makeSound()const;
};

#endif