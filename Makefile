# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaille <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 00:22:44 by abaille           #+#    #+#              #
#    Updated: 2018/09/20 16:01:09 by fmadura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= minishell
CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror

#color
YELLOW		= "\\033[33m"
BLUE		= "\\033[34m"
RED			= "\\033[31m"
WHITE		= "\\033[0m"
CYAN		= "\\033[36m"
GREEN		= "\\033[32m"
BOLD		= "\\033[1m"
PINK		= "\\033[95m"

OK			= $(CYAN)OK$(WHITE)
WAIT		= $(RED)WAIT$(WHITE)

SRC_PATH 	= ./srcs/
OBJ_PATH 	= ./objs/
INC_PATH 	= ./includes/ \
			  ./libft/

SRC_NAME 	= main.c \
			  environ.c \
			  struct_env.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I, $(INC_PATH))

.PHONY: all re clean fclean
.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	printf "\nSources are ready to be used !\n"
	$(CC) $(CFLAGS) $(OBJ) $(INC) -L libft/ -lft -o $(NAME)

$(OBJ) : | $(OBJ_PATH)

$(OBJ_PATH) :
	mkdir objs

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	printf "\rCompiling $< into object file.. $(WAIT)          "
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<
	printf "\rCompiling $< into object file.. $(OK)            "

clean:
	@rm -rf $(OBJ_PATH)
	@make clean -C libft/

fclean: clean
	rm -f $(NAME)
	@make fclean -C libft/

re: fclean all

run : all
	clear
	./minishell
