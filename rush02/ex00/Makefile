# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axlamber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 12:59:24 by axlamber          #+#    #+#              #
#    Updated: 2022/10/02 19:28:20 by axlamber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c \
		basic_ft/check_inputs.c \
		basic_ft/ft_atol.c \
		basic_ft/ft_itoa.c \
		basic_ft/ft_itoa_len.c \
		basic_ft/ft_nb_len.c \
		basic_ft/ft_putchar.c \
		basic_ft/ft_putstr.c \
		basic_ft/ft_split.c \
		basic_ft/ft_strcmp.c \
		basic_ft/ft_strlen.c \
		basic_ft/ft_strncpy.c \
		basic_ft/strncat_modif.c \
		list/ft_create_node.c \
		list/ft_last_node.c \
		list/ft_push_back.c \
		list/ft_show_list.c \
		parsing_ft/dict.c \
		parsing_ft/dict_error.c \
		parsing_ft/dictionary_to_list.c \
		parsing_ft/dictionary_to_string.c \
		parsing_ft/parse_line.c \
		parsing_ft/ft_get_number.c \
		parsing_ft/ft_get_word.c \
		parsing_ft/nb_cut.c \
		parsing_ft/nb_write.c \
		parsing_ft/ft_delspace.c


OBJS = ${SRC:.c=.o}

INCLUDE = includes/

.c.o :
	gcc -Wall -Wextra -Werror -I ${INCLUDE} -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	gcc -g3 -fsanitize=address -Wall -Wextra -Werror -I ${INCLUDE}  ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

