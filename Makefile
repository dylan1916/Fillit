# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile1                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etordjma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/01 16:10:46 by etordjma          #+#    #+#              #
#    Updated: 2019/01/01 19:13:44 by etordjma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc
NAME = fillit
CFLAGS = -Wall -Wextra -Werror
HEADER = fillit.h
CPPFLAGS = -I $(HEADER)
PATHLIB = libft/
LIB = ft
CLIB = -L $(PATHLIB) -l$(LIB)
SRC = error.c\
	fill_map.c\
	main.c\
	pieces.c\
	position_pieces.c\
	read.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : lib
			@$(CC) $(CFLAGS) -c $(SRC) $(CPPFLAGS)
					@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(CLIB)

lib :
			@Make -C $(PATHLIB)

clean :
			@/bin/rm -f $(OBJS)
					@Make -C $(PATHLIB) clean

fclean : clean
			@/bin/rm -f $(NAME)
					@Make -C $(PATHLIB) fclean

re : fclean all
