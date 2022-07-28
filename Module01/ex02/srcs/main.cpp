/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:58:25 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/21 17:05:17 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << &str << " " <<  stringPTR << " " << &stringREF << std::endl;
	std::cout << str << " " <<  *stringPTR << " " << stringREF << std::endl;
}