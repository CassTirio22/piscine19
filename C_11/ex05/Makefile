SRCS		= ft_putchar.c ft_putnbr.c ft_atoi.c main.c \
			  ft_operations.c ft_strlen.c ft_putstr.c

OBJS		= ${SRCS:.c=.o}

NAME		= do-op

GCC			= gcc -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			${GCC} $^ -o $@

.c.o:
			${GCC} -c $< -o ${<:.c=.o}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean re fclean
