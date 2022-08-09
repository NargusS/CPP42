/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:39:14 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/06 20:07:43 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	Animal *animals[100];

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