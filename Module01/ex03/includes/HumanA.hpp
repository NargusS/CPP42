/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:34:29 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/11 16:17:45 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "./Weapon.hpp"

class HumanA
{
	private:
		Weapon			&_weapon;
		std::string		_name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};


#endif