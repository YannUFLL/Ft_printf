# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 12:48:02 by ydumaine          #+#    #+#              #
#    Updated: 2022/03/28 19:29:51 by ydumaine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_utils.c ft_putnbr_base2.c\
ft_putadd_base2.c\

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = cc

BIBL = ar -rc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
			${BIBL} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS} 

fclean:     clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re 
