# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 12:48:02 by ydumaine          #+#    #+#              #
#    Updated: 2022/03/19 20:52:01 by ydumaine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_printf_utils.c ft_putnbr_base.c ft_printf.h\
ft_putadd_base.c\

BSRCS = ft_printf_bonus.c ft_printf_utils_bonus.c ft_putnbr_base_bonus.c\
ft_printf_bonus.h ft_putadd_base_bonus.c\  

OBJS = ${SRCS:.c=.o}

BOBJS = ${BSRCS:.c=.o}

NAME = libftprintf.a

CC = cc

BIBL = ar -rc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
			${BIBL} ${NAME} ${OBJS}

bonus:		${OBJS} ${BOBJS}
			${BIBL} ${NAME} ${OBJS} ${BOBJS}


all:		${NAME}

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:     clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
