/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:12:46 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/20 16:52:29 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &src);
		Span&	operator=(const Span &src);
		~Span();
		void	addNumber(unsigned int N);
		void	addNumberRange(unsigned int begin, unsigned int end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		class SpanIsFull : public std::exception{
			public:
				const char*	what() const throw();
		};
		class NoDistanceFind : public std::exception{
			public:
				const char*	what() const throw();
		};
		class WrongRangeOfNumber : public std::exception{
			public:
				const char*	what() const throw();
		};
	private:
		Span(void);
		unsigned int	_N;
		std::vector<unsigned int>		_tab;
};

#endif