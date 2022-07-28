/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 01:39:46 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/21 18:37:00 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv){
    Harl harl;

    if (argc != 2){
        std::cout << "Wrong number of args" << std::endl;
        return (-1);
    }
    harl.complain(argv[1]);
    return (0);
}