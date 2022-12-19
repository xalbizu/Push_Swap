# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 16:52:12 by xalbizu-          #+#    #+#              #
#    Updated: 2022/12/19 19:33:56 by xalbizu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH_LIBFT = libft/
LIBFT = $(PATH_LIBFT)libft.a

FILES = push_swap.c push_swap_utils.c errors.c swap.c push.c rotate.c index.c\
reverse_rotate.c
SRC = $(FILES:.c=.o)

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address 
 

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