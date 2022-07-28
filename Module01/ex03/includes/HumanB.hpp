/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:34:29 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/11 16:00:49 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "./Weapon.hpp"

class HumanB
{
	private:
		Weapon			*_weapon;
		std::string		_name;
	public:
		HumanB(std::string name);
		~HumanB();
        void    setWeapon(Weapon &weapon);
		void	attack();
};



#endif