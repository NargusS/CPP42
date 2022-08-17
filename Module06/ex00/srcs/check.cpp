/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:16:10 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/13 18:28:46 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalar.hpp"

bool	is_char(std::string str){
	if (str.length() == 1 && !is_alphanum(str[0]))
		return (true);
	return (false);
}

bool	is_alphanum(char c){
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	is_integer(std::string str){
	for (unsigned long i = 0; i < str.length(); i++){
		if (!is_alphanum(str[i]))
			return (false);
	}
	return (true);
}

bool	is_float(std::string str){
	bool	have_point = false;

	if (str == "nanf" || str == "inff" || str == "+inff" || str == "-inff")
		return (true);
	for (unsigned long i = 0; i < str.length(); i++){
		if (i != 0 && i != str.length() - 1 && str[i] == '.'){
			if (have_point == true)
				return (false);
			have_point = true;
		}
		else if (str[i] == 'f' && i == str.length() - 1 && have_point)
			return (true);
		else if (!is_alphanum(str[i]))
			return (false);
	}
	return (true);
}

bool	is_double(std::string str){
	bool	have_point = false;

	if (str == "nan" || str == "inf" || str == "+inf"|| str == "-inf")
		return (true);
	for (unsigned long i = 0; i < str.length(); i++){
		if (i != 0 && i != str.length() - 1  && str[i] == '.'){
			if (have_point == true)
				return (false);
			have_point = true;
		}
		else if (!is_alphanum(str[i]))
			return (false);
	}
	return (true);
}