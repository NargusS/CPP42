/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:44:07 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/16 15:02:21 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.tpp"

int	main(){

	try{
		std::deque<int> numbers;

		for (int i = 0; i < 10; i++){
			numbers.push_back(i);
		}
		easyfind(numbers, 9);
		std::cout << "Occurence found" << std::endl;
	}
	catch(const int &e){
		std::cout << "Occurence not found" << std::endl;
	}

	return 0;
}