/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:30:17 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/18 20:21:49 by achane-l         ###   ########.fr       */
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

class	NoOccurenceException : public std::exception{
	public:
		virtual const char*	what() const throw (){
			return "No Occurence Found";
		}
};

template <typename T>
typename T::iterator	easyfind(T container, int integer){
	typename T::iterator it;

	it = find(container.begin(), container.end(), integer);
	if (it == container.end())
		throw NoOccurenceException();
	return (it);
}

#endif