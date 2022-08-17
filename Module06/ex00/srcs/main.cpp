/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:51:26 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/17 18:03:13 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalar.hpp"

// operateur <<

int	main(int argc, char **argv){
	if (argc == 1 || argc > 2)
		std::cout << "./ex00 <char, int, float or double>";
	else
	{
		Scalar	test(argv[1]);
		test.printChar();
		test.printInt();
		test.printFloat();
		test.printDouble();
	}
}