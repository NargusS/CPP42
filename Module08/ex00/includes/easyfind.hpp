/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:30:17 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/16 15:03:27 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <algorithm>

class easyfind
{
	public:
};
template <typename T>
typename T::iterator	easyfind(T container, int integer){
	typename T::iterator it;

	it = find(container.begin(), container.end(), integer);
	if (it == container.end())
		throw 1;
	return (it);
	throw 1;
}

#endif