# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axlamber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 16:54:59 by axlamber          #+#    #+#              #
#    Updated: 2022/10/05 12:10:49 by axlamber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
		srcs/ft_swap.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c

OBJS = ${SRC:.c=.o}

INCLUDE = includes/

.c.o :
	gcc -Wall -Wextra -Werror -I ${INCLUDE} -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar -rc ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
