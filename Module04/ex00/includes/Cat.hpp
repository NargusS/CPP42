/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:15:06 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 21:15:24 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "./Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat&	operator=(const Cat &src);
		virtual void	makeSound()const;
};

#endif