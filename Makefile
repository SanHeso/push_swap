NAME = push_swap

HEADER = include/pusw.h

SRCS = push_swap.c	rules.c	utils.c	validation.c

SRCS_DIR = $(addprefix src/, $(SRCS))

OBJS = $(patsubst src/%.c, obj/%.o, $(SRCS_DIR))

OUT_DIR = obj

PATH_LIBFT = include/libft_mod/libft.a

INCLUDE = -Iinclude

GREEN = "\033[0;32m"
CYAN = "\033[0;36m"
EOC = "\033[0m"

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all:		$(OUT_DIR) $(PATH_LIBFT) $(NAME)

obj/%.o:	src/%.c
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(PATH_LIBFT) $(HEADER)
			@$(CC) $(OBJS) $(PATH_LIBFT) $(INCLUDE) -o $(NAME)
			@echo $(CYAN) "$(NAME) Created!" $(EOC)

$(OUT_DIR):
			@mkdir -p $@
			@echo $(GREEN) "$@ Direction created!" $(EOC)

$(PATH_LIBFT):
			@make -C include/libft_mod/ bonus
			@echo $(CYAN) "libft.a Created!" $(EOC)

# run:		all
# 			@ARG="4 67 6 72 9 12"; ./push_swap $ARG | ./checker_Mac $ARG

clean:
			@rm -rf $(OUT_DIR)
			@rm -rf a.out
			@make -C include/libft_mod/ clean
			@echo $(GREEN) "Clean complete!" $(EOC)

fclean:		clean
			@rm -f $(NAME)
			@make -C include/libft_mod/ fclean
			@echo $(GREEN) "Fclean complete!" $(EOC)

re:			fclean all

.PHONY:		all clean fclean re