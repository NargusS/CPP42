/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:17:59 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 15:37:11 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main(){
	ShrubberyCreationForm jardin("Jardin");
	RobotomyRequestForm zombie("zombie");
	PresidentialPardonForm Manu("Manu");
	try{
		std::cout << "-------------------Form error not sign--------------------" << std::endl;
		Bureaucrat patron1("Boss1",1);
		patron1.executeForm(jardin);
		patron1.executeForm(zombie);
		patron1.executeForm(Manu);

	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "-------------------Form error not graded enought--------------------" << std::endl;
		Bureaucrat patron1("Boss1",1);
		std::cout << "Boss Signed all Form" << std::endl;
		patron1.signForm(jardin);
		patron1.signForm(zombie);
		patron1.signForm(Manu);
		std::cout << "Create Stagiaire" << std::endl;
		Bureaucrat stagiaire("stagiaire",150);
		stagiaire.executeForm(jardin);
		stagiaire.executeForm(zombie);
		stagiaire.executeForm(Manu);
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "-------------------Form Exec find--------------------" << std::endl;
		std::cout << "Create employe" << std::endl;
		Bureaucrat employe("employe",5);
		employe.executeForm(jardin);
		employe.executeForm(zombie);
		employe.executeForm(Manu);
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}