/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:39:35 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/13 17:55:30 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP
#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
#include <math.h>

class Scalar
{
	private:
		double	_value;
		bool	is_impossible;
	public:
		Scalar();
		Scalar(char *arg);
		Scalar(const Scalar& src);
		Scalar&	operator=(const Scalar& src);

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();
		~Scalar();
};

bool	is_char(std::string str);
bool	is_alphanum(char c);
bool	is_integer(std::string str);
bool	is_float(std::string str);
bool	is_double(std::string str);
#endif