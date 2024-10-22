# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 16:02:03 by yzeybek           #+#    #+#              #
#    Updated: 2024/09/05 11:50:14 by ibayandu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/content_split.c \
		./srcs/file_ops.c \
		./srcs/main.c \
		./srcs/print_solution.c \
		./srcs/solution_matrix.c \
		./srcs/commons/ft_is_printable.c \
		./srcs/commons/ft_min.c \
		./srcs/commons/ft_set_chars.c \
		./srcs/commons/ft_strlen_n.c \
		./srcs/commons/ft_check_line.c

OBJS = ${SRCS:.c=.o}

INCS = ./includes

NAME = bsq

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re