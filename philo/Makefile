# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 20:21:22 by lguedes           #+#    #+#              #
#    Updated: 2022/11/23 15:25:14 by lguedes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME = philosophers

# General configuration
CC =		clang
CFLAGS =	-Wall -Wextra -Werror -pthread
DB_CFLAGS =	-Wall -Wextra -Werror -pthread -g

# Source code.
SRCS		+= $(addprefix src/, main.c ft_strlen.c)

# SRCS into .o files
OBJS	= $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(DB_CFLAGS) -c $< -o $@

#----------------------------------------------------#
#---------------Alright, good to go.-----------------#
#----------------------------------------------------#

all:		${NAME}

debug:
	$(CC) $(DB_CFLAGS) $(MLX_FLAGS) $(SRCS) $(LIBFT) $(MLX) -o philo

${NAME}:	$(OBJS) $(SRCS)
			$(CC) $(OBJS) -o $(NAME)

clean:
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all # TODO  Fix this rule

.PHONY:		all clean fclean re
