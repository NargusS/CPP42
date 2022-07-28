# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 15:11:35 by achane-l          #+#    #+#              #
#    Updated: 2022/07/25 03:28:26 by achane-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS = srcs/main.cpp\
		srcs/ScavTrap.cpp\
		srcs/ClapTrap.cpp\
		srcs/FragTrap.cpp\
		srcs/DiamondTrap.cpp

INCLUDES = includes/ScavTrap.hpp\
			includes/ClapTrap.hpp\
			includes/FragTrap.hpp\
			includes/DiamondTrap.hpp

COMPILER = c++

FLAGS = -std=c++98 -Wall -Werror -Wextra

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
		${COMPILER} ${FLAGS} ${OBJS} -I includes -o ${NAME}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME}

re: fclean all

%.o: %.cpp
	${COMPILER} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY: all clean fclean re