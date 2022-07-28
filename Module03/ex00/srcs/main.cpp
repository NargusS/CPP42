/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:30:47 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/24 20:00:51 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void){
	ClapTrap Personne;
	ClapTrap MrOne("MrOne");

	Personne.attack("MrWhite");
	Personne.beRepaired(100);
	Personne.takeDamage(110);
	Personne.beRepaired(100);
	MrOne.takeDamage(9);
	MrOne.takeDamage(2);
	MrOne.takeDamage(10);
	MrOne.attack("L'autre");
}