/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:17:59 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/10 17:27:01 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(){
	try
	{
		std::cout << "----------------Create Employe with a bad grade----------------" << std::endl;
		Bureaucrat Probleme("Probleme",6666);
		std::cout << Probleme << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "----------------Create BOSS----------------" << std::endl;
		Bureaucrat Patron("Boss", 1);
		std::cout << Patron << std::endl;
		Patron.getPromoted();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try {
		std::cout << "----------------Create Employe----------------" << std::endl;
		Bureaucrat Manager("SubBoss", 25);
		std::cout << Manager << std::endl;
		for (int i=0; i < 24; i++){
			Manager.getPromoted();
		}
		std::cout << Manager << std::endl;
	}
	catch(const std::exception &src)
	{
		std::cout << src.what() <<std::endl;
	}
	try
	{
		std::cout << "----------------Create Stagiaire----------------" << std::endl;
		Bureaucrat Stagiaire;
		Stagiaire.getRetrograded();
		std::cout << Stagiaire << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}