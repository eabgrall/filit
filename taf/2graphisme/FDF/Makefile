# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabgrall <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/04 17:54:07 by eabgrall          #+#    #+#              #
#    Updated: 2017/09/21 18:05:21 by eabgrall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC_PATH = src

SRC_NAME = main.c

OBJ_PATH = obj

INCLUDE_PATH = -I include

LIB_A = -lft

CC = clang

CFLAGS = -Werror -Wextra -Wall -g

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
	make -C libft/
	make -C minilibx_macos/
	$(CC) $(CFLAGS) -L ./libft $(LIB_A) -L ./minilibx_macos -lmlx -framework OpenGL -framework AppKit $(OBJ) -o $(NAME)

$(OBJ_PATH):
	@mkdir $(OBJ_PATH) 2> /dev/null || true

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -o $@ -c $^

clean:
	make clean -C libft/
	$(RM) -r $(OBJ)

fclean: clean
	make fclean -C libft/
	$(RM) -r $(NAME)

re: fclean all
