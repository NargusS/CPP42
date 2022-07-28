/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:54:05 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/21 17:02:26 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void){
    Zombie *my_zombies;

    my_zombies = zombieHorde(10, "Patricks");
    delete [] my_zombies;

    Zombie *my_zombies2;

    my_zombies2 = zombieHorde(-1, "POulet");
    delete [] my_zombies2;

    return (0);
}