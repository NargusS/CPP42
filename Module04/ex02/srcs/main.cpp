/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:39:14 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:37:44 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	AAnimal *animals[100];

	for (int i = 0; i < 100; i++){
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int j = 0; j < 100 ; j++){
		delete animals[j];
	}

	return 0;
}