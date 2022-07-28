/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:46:39 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/21 20:15:37 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					_fixedInteger;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();
		Fixed    &operator=(Fixed const &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif