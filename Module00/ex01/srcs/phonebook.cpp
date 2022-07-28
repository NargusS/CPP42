/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:55:46 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/07 19:03:12 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook(void){
        this->_index = 0;
        return ;
};

PhoneBook::~PhoneBook(void){
    return ;
};

bool	PhoneBook::add_contact_to_phonebook(void){
	if (this->_clients[this->_index % 8].add_new_contact()){
		this->_index++;
		return (true);
	}
	return (false);
}

void	PhoneBook::search_contact(void){
	std::string			contact_search;
	unsigned int		count;

	for (int contact = 0; contact < 8; ++contact){
		this->_clients[contact].print_contacts(contact);
	}
	while (1){
		std::cout << "For view more info about contact enter the index of contact: " << std::endl;
		std::getline(std::cin, contact_search);
		if (std::cin.eof()){
			std::cout << "^D" << std::endl;
			return;
		}
		if (contact_search.length() == 0)
			return ;
		else if (contact_search.length() == 1 && (std::isdigit(contact_search[0]) && contact_search[0] < '8') && this->_clients[contact_search[0] - '0'].print_full_info())
			return ;
		count = 0;
		for (unsigned int i = 0; i < contact_search.length(); ++i){
			if (std::isdigit(contact_search[i]))
				count++;
		}
		if (count < contact_search.length())
			std::cout << "Invalid Format (Only digits)" << std::endl;
		else
			std::cout << "Invalid Index" << std::endl;
	}
	std::cin.clear();
	return;
		
}