/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:44:07 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/14 19:14:37 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Array.hpp"

int	main(){

	Array<int>	Test1(5);
	Array<int>	Test1Copy(Test1);
	
	std::cout << "-------------------Modify Test1--------------------" << std::endl ;
	std::cout << "Value of Test1[0] : " << Test1[0] << std::endl;
	std::cout << "Value of Test1Copy[0] : " << Test1Copy[0] << std::endl;
	Test1[0] = 10;
	std::cout << "Modification DONE" << std::endl ;
	std::cout << "Value of Test1[0] : " << Test1[0] << std::endl;
	std::cout << "Value of Test1Copy[0] : " << Test1Copy[0] << std::endl;
	std::cout << "-------------------Modify Test2--------------------" << std::endl ;
	Array<int>	Test1Copy2 = Test1;
	std::cout << "Value of Test1[0] : " << Test1[0] << std::endl;
	std::cout << "Value of Test1Copy2[0] : " << Test1Copy2[0] << std::endl;
	Test1[0] = 20;
	std::cout << "Modification DONE" << std::endl ;
	std::cout << "Value of Test1[0] : " << Test1[0] << std::endl;
	std::cout << "Value of Test1Copy2[0] : " << Test1Copy2[0] << std::endl;

	std::cout << "-------------------Size Method test--------------------" << std::endl ;
	Array<std::string>	teststr;

	std::cout << "size teststr : "<< teststr.size() << std::endl;
	std::cout << "size test1 : "<< Test1.size() << std::endl;
	std::cout << "-------------------Index Invalid Test--------------------" << std::endl ;
	try{
		std::cout << "size test1 : "<< Test1[-1] << std::endl;
	}
	catch(const InvalidIndexException &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "size teststr1 : "<< teststr[0] << std::endl;
	}
	catch(const InvalidIndexException &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}