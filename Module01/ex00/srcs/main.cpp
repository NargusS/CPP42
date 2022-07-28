/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:56 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/21 16:47:02 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void){
	Zombie my_Zombie("ZombieOnStack");
	Zombie *heap_zombie = newZombie("ZombieOnHeap");

	my_Zombie.announce();
	heap_zombie->announce();

	randomChump("ZombieOnChump");
	delete heap_zombie;
	return (0);
}