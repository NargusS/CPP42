/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:50:41 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/13 20:55:03 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
#include <cstdlib>
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

void	identify(Base *p);
Base*	generate(void);
void	identify(Base &p);

#endif