/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:17:59 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/15 14:04:09 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main(){
	try{
		std::cout << "-------------------Form error grade--------------------" << std::endl;
		Form paper_test("test", 0, 100);
		Bureaucrat patron1("Boss1",0);
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "-------------------Form error grade--------------------" << std::endl;
		Form paper_test("test", 1, 151);
		Bureaucrat patron1("Boss1",1);
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "-------------------Form to sign--------------------" << std::endl;
		Form paper_test("test", 1, 50);
		Bureaucrat patron1("Boss1",1);
		patron1.signForm(paper_test);
		std::cout << patron1 << std::endl;
		std::cout << paper_test << std::endl;
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}