# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znaoui <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 14:06:35 by znaoui            #+#    #+#              #
#    Updated: 2022/11/01 16:34:57 by znaoui           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############### SETUP ###############

NAME = push_swap

CFLAGS = -g3 -Wall -Wextra -Werror -I ./srcs/ft_printf

SRCS = srcs/main.c srcs/ft_atoi.c srcs/parsing.c srcs/parsing2.c srcs/ft_split.c srcs/algo_list.c srcs/algo_list2.c srcs/radix_algo.c \
	srcs/operation_list.c srcs/operation_list2.c srcs/operation_list3.c srcs/utils_list.c srcs/utils_list2.c

OBJS = $(SRCS:.c=.o)

############### COMMANDS ###############

all:
	@make --no-print-directory -C ./srcs/ft_printf
	@make --no-print-directory ${NAME}

.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	gcc ${CFLAGS} -o ${NAME} ${OBJS} -L ./srcs/ft_printf -lftprintf
	echo "$(WHITE)Compilation in progress..$(DEFAULT)"
	sleep 1
	echo "$(GREEN)The program ${NAME} is ready!$(DEFAULT)"

help: 
	echo "$(WHITE)Commands available: all, clean, fclean, re$(DEFAULT)"

clean:
	rm -rf ${OBJS}
	make --no-print-directory -C ./srcs/ft_printf clean
	echo "$(YELLOW)All object files have been deleted$(DEFAULT)"

fclean: clean
	rm -rf ${NAME}
	make --no-print-directory -C ./srcs/ft_printf fclean
	echo "$(RED)The program ${NAME} has been deleted$(DEFAULT)"

re: fclean
	make --no-print-directory all

.PHONY: all help clean fclean re

.SILENT:

################ COLORS ###############

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
WHITE = \033[1;37m
