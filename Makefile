# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/25 15:46:39 by hnewman           #+#    #+#              #
#    Updated: 2021/06/25 18:19:37 by hnewman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEADER = include/pusw.h

SRCS = rules.c push_swap.c utils.c validation.c rules_2.c

SRCS_DIR = $(addprefix src/, $(SRCS))

OBJS = $(patsubst src/%.c, obj/%.o, $(SRCS_DIR))

OUT_DIR = obj

PATH_LIBFT = libft_mod/libft.a

GREEN = "\033[0;32m"
CYAN = "\033[0;36m"
EOC = "\033[0m"

CC = @gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -Iinclude

all:		$(OUT_DIR) $(PATH_LIBFT) $(NAME)

obj/%.o:	src/%.c
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(PATH_LIBFT) $(HEADER)
				$(CC) $(OBJS) $(PATH_LIBFT) $(INCLUDE) -o $(NAME)
				@echo $(CYAN) "$(NAME) Created!" $(EOC)

$(OUT_DIR):
				@mkdir -p $@
				@echo $(GREEN) "$@ Direction created!" $(EOC)

$(PATH_LIBFT):
				@make -C libft_mod/ bonus
				@echo $(CYAN) "libft.a Created!" $(EOC)

clean:
				@rm -rf $(OUT_DIR)
				@rm -rf a.out
				@make -C libft_mod/ clean
				@echo $(GREEN) "Clean complete!" $(EOC)

fclean:		clean
				@rm -f $(NAME)
				@make -C libft_mod/ fclean
				@echo $(GREEN) "Fclean complete!" $(EOC)

re:			fclean all

.PHONY:		all clean fclean re