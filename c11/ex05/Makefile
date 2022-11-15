# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axlamber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 23:18:58 by axlamber          #+#    #+#              #
#    Updated: 2022/10/03 23:20:21 by axlamber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = main.c \
		ft_atoi.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \
		operation.c

OBJS = ${SRC:.c=.o}

INCLUDE = includes/

.c.o :
	gcc -g3 -Wall -Wextra -Werror -I ${INCLUDE} -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	gcc -g3 -Wall -Wextra -Werror -I ${INCLUDE}  ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

