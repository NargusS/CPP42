/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:37:48 by achane-l          #+#    #+#             */
/*   Updated: 2022/08/18 17:08:58 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <exception>

template<class T>
class Array
{
	private:
		T*				_tab;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		Array&	operator=(const Array& src);
		unsigned int	size();
		T&	operator[](unsigned int index);
		~Array();
};

template <class T>
Array<T>::Array(){
	this->_tab = NULL;
	this->_size = 0;
};

template <class T>
Array<T>::Array(unsigned int n){
	if (n > 0)
		this->_tab = new T[n];
	else
		this->_tab = NULL;
	this->_size = n;
	for (unsigned int i = 0; i < n; i++){
		this->_tab[i] = 0;
	}
};

template <class T>
Array<T>::Array(const Array& src){
	this->_size = src._size;
	this->_tab = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++){
		this->_tab[i] = src._tab[i];
	}
	return;
};

template <class T>
Array<T>::~Array(){
	if (this->_tab)
		delete [] _tab;
	return;
}

template <class T>
Array<T>&	Array<T>::operator=(const Array& src){
	this->_size = src._size;
	if (this->_tab)
		delete (this->_tab);
	this->_tab = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++){
		this->_tab[i] = src._tab[i];
	}
	return (*this);
}

template <class T>
unsigned int	Array<T>::size(){
	const unsigned int value = this->_size;
	return (value);
}

class InvalidIndexException : public std::exception {
	public:
		virtual const char* what()const throw() {
			return ("Invalid index");
		}
};

template <class T>
T&	Array<T>::operator[](unsigned int index){
	if (index < 0 || index >= this->_size)
		throw InvalidIndexException();
	return (this->_tab[index]);
}

#endif