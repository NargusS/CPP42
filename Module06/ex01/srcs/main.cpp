/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:58:18 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/17 19:55:27 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data{
	int c;
	std::string n;
};

uintptr_t	serialize(Data*	ptr){
	uintptr_t	value;

	value = reinterpret_cast<uintptr_t>(ptr);
	return (value);
}

Data*	deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(){
	Data Test;
	Data Result;

	std::cout << "-----------Init Data Test--------------" << std::endl;
	Test.c = 10;
	Test.n = "Test of serialize";

	std::cout << "Test: " << &Test << " " << Test.c << " " << Test.n << std::endl;
	std::cout << "Result: "<< &Result << " " << Result.c << " " << Result.n << std::endl;
	std::cout << "-----------Serialize Data Test--------------" << std::endl;
	uintptr_t raw = serialize(&Test);
	std::cout << "-----------Deserialize Data Test In result --------------" << std::endl;
	Result = *deserialize(raw);
	std::cout << "Result: "<< &Result << " " << Result.c << " " << Result.n << std::endl;
	std::cout << "Test: " << &Test << " " << Test.c << " " << Test.n << std::endl;

}