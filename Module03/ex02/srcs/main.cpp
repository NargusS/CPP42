/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:30:47 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/25 01:26:07 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int	main(void){
	FragTrap Personne;
	FragTrap MrOne("MrOne");

	Personne.attack("MrWhite");
	Personne.beRepaired(100);
	Personne.takeDamage(110);
	Personne.beRepaired(100);
	Personne.highFivesGuys();
	MrOne.takeDamage(9);
	MrOne.takeDamage(2);
	MrOne.highFivesGuys();
	MrOne.takeDamage(10);
	MrOne.attack("L'autre");
}