# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achane-l <achane-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 15:11:35 by achane-l          #+#    #+#              #
#    Updated: 2022/08/13 20:24:01 by achane-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRCS = srcs/main.cpp\
	srcs/Base.cpp

INCLUDES = includes/A.hpp\
			includes/B.hpp\
			includes/C.hpp\
			includes/Base.hpp

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