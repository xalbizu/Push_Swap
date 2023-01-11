# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 16:52:12 by xalbizu-          #+#    #+#              #
#    Updated: 2023/01/11 20:33:58 by xalbizu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH_LIBFT = libft/
LIBFT = $(PATH_LIBFT)libft.a

FILES = push_swap.c push_swap_utils.c errors.c swap.c push.c rotate.c index.c\
reverse_rotate.c algorithm.c
SRC = $(FILES:.c=.o)

NAME = push_swap
CC = gcc
CFLAGS = -Werror -Wall  -Wextra -g3 #-fsanitize=address 
 

all: $(NAME)

$(NAME): $(SRC)
	make -C $(PATH_LIBFT)
	$(CC) $(CFLAGS) $(FILES) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(PATH_LIBFT)
	rm -f $(SRC)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(PATH_LIBFT)

re: fclean all