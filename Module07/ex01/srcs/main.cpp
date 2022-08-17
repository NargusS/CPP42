/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:44:07 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/14 17:34:08 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/iter.hpp"

int	main(){
	std::string tab[] = {"loop","prout", "caca"};
	::iter(tab, 3, print_elem);

	int tab1[] = {1,2, 3, 4, 5, 6};
	::iter(tab1, 6, print_elem);
	
	bool tab2[] = {true,false};
	::iter(tab2, 2, print_elem);

	return 0;
}