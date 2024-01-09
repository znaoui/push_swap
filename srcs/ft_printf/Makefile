############### SETUP ###############

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_size_len.c srcs/ft_strlen.c srcs/ft_putchar.c srcs/ft_putnbr_adress.c srcs/ft_putnbr_unsigned.c srcs/ft_putnbr.c srcs/ft_putnbr_hexa.c srcs/ft_putstr.c srcs/ft_printf.c

OBJS = $(SRCS:.c=.o)

############### COMMANDS ###############

all:
	@make ${NAME}

.c.o:
	@gcc ${FLAGS} -c $< -o $(<:.c=.o)

${NAME}: ${OBJS}	
	@ar rc ${NAME} ${OBJS}
	@ranlib ${NAME}

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -rf ${NAME}

re: fclean
	@make all

.PHONY: make all clean fclean re

.SILENT:

############### COLORS ###############

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[1;0m
WHITE = \033[1;37m
CYAN = \033[1;36m
