/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:17:59 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 16:16:42 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int	main(){
	try{
		Intern	Stagiare;
		Stagiare.makeForm("PresidentialPardonForm", "Manu");
		Stagiare.makeForm("RobotomyRequestForm", "Ethan");
		Stagiare.makeForm("ShrubberyCreationForm", "Eric");
		Stagiare.makeForm("rien", "Manu");
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}