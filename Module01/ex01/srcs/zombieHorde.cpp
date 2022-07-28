/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:43:34 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/21 17:02:15 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	Zombie*	hordezombie;

	if (N <= 0)
		return (NULL);
	hordezombie = new Zombie[N];
	for (int i = 0; i < N; ++i){
		hordezombie[i].setname(name);
		hordezombie[i].announce();
	}
	return (hordezombie);
}