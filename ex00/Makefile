# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 21:26:04 by msousa            #+#    #+#              #
#    Updated: 2022/03/21 21:33:43 by msousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
CC			= gcc
RM			= rm -f
OBJ			= ${SRC:.c=.o}
SRC			= megaphone.cpp

NAME		= megaphone

${NAME}:	${OBJ}
					${CC} ${CFLAGS} ${OBJ} -o $@

%.o:%.c
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

test:			${NAME}
					-./tests.sh

clean:
					${RM} ${OBJ}

fclean:		clean
					${RM} ${NAME}

re: 			fclean all

.PHONY : 	all clean fclean re
