# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axlamber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 13:24:11 by axlamber          #+#    #+#              #
#    Updated: 2022/10/05 21:21:31 by rleger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c \
		basic/ft_strlen.c \
		parsing/ft_split.c \
		parsing/map_to_string.c \
		parsing/strncat_modif.c \
		parsing/convert_map.c \
		parsing/ft_file.c \
		parsing/ft_standard.c \
		srcs/ft_error.c \
		srcs/ft_solve.c \
		srcs/ft_tools.c \
		srcs/ft_valid.c \
		srcs/ft_init_solve.c

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
