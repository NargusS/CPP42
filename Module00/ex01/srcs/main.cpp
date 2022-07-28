/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:55:46 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/05 15:37:23 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int main(){
    PhoneBook my_phonebook;

    while (1){
        std::string cmd;

        std::cout << "Enter command (EXIT, ADD, SEARCH) : ";
        std::getline(std::cin, cmd);
        if (std::cin.eof()){
            std::cout << "^D" << std::endl;
            break;
        }
        if (cmd.compare("EXIT") == 0)
            return (1);
        else if (cmd.compare("ADD") == 0){
            if (!my_phonebook.add_contact_to_phonebook())
                return (0);
        }
        else if (cmd.compare("SEARCH") == 0)
            my_phonebook.search_contact();
        else
            std::cout << "Commande introuvable" << std::endl;
        std::cin.clear();
    }
    return (0);
}