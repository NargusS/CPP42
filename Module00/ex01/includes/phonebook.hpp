/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:59:37 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/05 15:36:29 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./contact.hpp"

class PhoneBook
{
private:
    Contact _clients[8];
    int     _index;
public:
    PhoneBook(void);
    ~PhoneBook(void);
    bool	add_contact_to_phonebook(void);
    void    search_contact(void);
};