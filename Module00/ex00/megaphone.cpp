/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:24:58 by achane-l          #+#    #+#             */
/*   Updated: 2022/07/10 02:46:57 by achane-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char ** argv){
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else{
        for (int i = 1; i < argc; ++i){
            std::string  word(argv[i]);

            for (unsigned int j = 0; j < word.length(); ++j){
                word[j] = toupper(word[j]);
            }
            std::cout << word;
        }
        std::cout << std::endl;
    }
    return (0);
}