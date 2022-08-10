/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:39:14 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/10 14:39:54 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

int main()
{
	Animal *animals[100];

	for (int i = 0; i < 20; i++){
		if (i < 10)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "----------Change ideas-----------" << std::endl;
	Brain *brain_test = animals[0]->getBrain();
	for (int k = 0; k < 100; k++){
		brain_test->ideas[k] = "hungry";
	}

	brain_test->ideas[0] = "play";
	brain_test->ideas[1] = "sleep";
	std::cout << "----------Print ideas-----------" << std::endl;
	std::cout << brain_test->ideas[0] << std::endl;
	std::cout << brain_test->ideas[1] << std::endl;
	std::cout << brain_test->ideas[2] << std::endl;
	std::cout << brain_test->ideas[3] << std::endl;
	std::cout << brain_test->ideas[4] << std::endl;
	std::cout << brain_test->ideas[5] << std::endl;
	std::cout << brain_test->ideas[6] << std::endl;
	std::cout << brain_test->ideas[7] << std::endl;
	std::cout << brain_test->ideas[8] << std::endl;
	std::cout << brain_test->ideas[9] << std::endl;
	std::cout << brain_test->ideas[10] << std::endl;
	for (int j = 0; j < 20 ; j++){
		delete animals[j];
	}

	return 0;
}