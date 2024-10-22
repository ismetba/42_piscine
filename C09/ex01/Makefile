# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 11:52:20 by ibayandu          #+#    #+#              #
#    Updated: 2024/09/05 12:10:20 by ibayandu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	./srcs/ft_putchar.c \
		./srcs/ft_swap.c    \
		./srcs/ft_putstr.c  \
		./srcs/ft_strlen.c  \
		./srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

INCS = ./includes

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}
	
${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}
	
all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re