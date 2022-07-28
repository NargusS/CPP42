/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:28:18 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/07 19:05:31 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

Contact::Contact(void){
	return ;
}

Contact::~Contact(void){
	return ;
}

static bool    is_name(std::string name){
	for (unsigned int  i = 0; i < name.length(); ++i){
		if (!std::isalpha(name[i]))
			return (false);
	}
	return (true);
}

static bool    is_phonenumber(std::string name){
	if (name.length() != 10)
		return (false);
	for (unsigned int  i = 0; i < name.length(); ++i){
		if (!std::isdigit(name[i]))
			return (false);
	}
	return (true);
}

static std::string fill_field(string sentence_field, int type_field){
	std::string info;

	std::cout << sentence_field;
	std::getline(std::cin, info);
	if (std::cin.eof()){
		std::cout << "^D" << std::endl;
		return("");
	}
	while (info.length() == 0 || ((type_field == 0 || type_field == 1 ) && !is_name(info)) || ((type_field == 3 && !is_phonenumber(info)))){
		if (info.length() == 0)
			std::cout << "You need to fill the field" << std::endl;
		else
			std::cout << "Incorrect Format" << std::endl;
		std::cout << sentence_field;
		std::getline(std::cin, info);
		if (std::cin.eof()){
			std::cout << "^D" << std::endl;
			return("");
		}
	}
	return (info);
}

std::string ajust_left(std::string value){
	std::string ajust;
	if (value.length() < 10){
		for (unsigned int  i = 0; i < 10 - value.length(); ++i)
			ajust += " ";
		value = ajust + value;
	}
	else if (value.length() > 10)
		return (value.substr(0, 9) + ".");
	return (value);
}

bool    Contact::print_full_info(void){
	if (this->_firstname.empty())
		return (false);
	std::cout << "Information of contact:\n" << this->_firstname+ "\n" << this->_lastname+"\n"  << this->_nickname+"\n" << this->_phonenumber+"\n" << this->_darkest_secret+"\n" << std::endl;
	return (true);
}

void    Contact::print_contacts(int index){
	std::string index_value;
	if (this->_firstname.empty())
		return;
	index_value = index + '0'; 
	std::cout<< "|" << ajust_left(index_value) << "|" << ajust_left(this->_firstname) << "|" << ajust_left(this->_lastname)  << "|" << ajust_left(this->_nickname) << "|" << std::endl;
}

bool	Contact::add_new_contact(void){
	this->_firstname = fill_field("Enter firstname : ", 0);
	if (this->_firstname == "")
		return(false);
	this->_lastname = fill_field("Enter lastname : ", 1);
	if (this->_firstname == "")
		return(false);
	this->_nickname = fill_field("Enter nickname : ", 2);
	if (this->_firstname == "")
		return(false);
	this->_phonenumber = fill_field("Enter phonenumber : ", 3);
	if (this->_firstname == "")
		return(false);
	this->_darkest_secret = fill_field("Enter darkest secret : ", 2);
	if (this->_firstname == "")
		return(false);
	return (true);
}
