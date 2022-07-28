/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:46:39 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/22 23:57:34 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedInteger;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const int int_value);
		Fixed(const float float_value);
		Fixed(Fixed const &src);
		~Fixed();
		Fixed			&operator=(Fixed const &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fix);

#endif