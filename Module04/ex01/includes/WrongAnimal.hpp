/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:41:03 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 21:41:05 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal &src);
		const std::string	getType()const;
		void	makeSound()const;
};



#endif