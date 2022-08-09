/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:41:23 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/05 21:56:38 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	protected:
		std::string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &src);
		Brain&	operator=(const Brain &src);
};



#endif