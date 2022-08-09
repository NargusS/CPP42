/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:13:22 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:31:52 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <iostream>
#include "./Brain.hpp"

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		virtual ~AAnimal() = 0;

		virtual AAnimal&	operator=(const AAnimal &src) = 0;

		const std::string	getType()const;
		virtual void	makeSound()const = 0;
		virtual Brain*	getBrain() const = 0;
};



#endif