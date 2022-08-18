/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:39:17 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/18 14:10:10 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b){
	T temp;

	temp = a;
	a = b;
	b = temp;	
}

template <typename T>
T	min(const T &a, const T &b){
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(const T &a, const T &b){
	if (a > b)
		return (a);
	return (b);
}

#endif