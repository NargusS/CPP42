/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:39:35 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/17 19:31:04 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP
#include <iostream>
#include <limits.h>
#include <iomanip>
#include <math.h>
#include <float.h>

class Scalar
{
	private:
		double	db_value;
		int		int_value;
		float	fl_value;
		char	ch_value;
		bool	impossible_int;
		bool	impossible_ch;
		bool	all_impossible;
	public:
		Scalar();
		Scalar(const char *arg);
		Scalar(const Scalar& src);
		Scalar&	operator=(const Scalar& src);

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();
		void	detect_type(const char *arg);
		bool	check_is_char(const char *str);
		bool	is_integer(const char *str);
		bool	is_double(const char *str);
		bool	is_float(const char *str);
		~Scalar();
};

#endif