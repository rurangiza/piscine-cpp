# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 17:22:14 by arurangi          #+#    #+#              #
#    Updated: 2023/06/15 20:54:14 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### target
BIN			=   Harl

### directories
SRC_DIR		=	src
OBJ_DIR		=	obj
BIN_DIR		=	bin

### files
SRC_FILES	=	$(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES	=	$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

### variables
COMPILER	=   c++ $(VERSION)
VERSION     =   -std=c++98
FLAGS       =	-Wall -Wextra -Werror
FLAGS		+=	-I ./includes
#FLAGS		+=	-Wconversion -g -fsanitize=address

### rules
all:		$(BIN)

$(BIN):		$(OBJ_DIR) $(BIN_DIR) $(OBJ_FILES)
			$(COMPILER) $(FLAGS) $(OBJ_FILES) -o ./bin/$(BIN)

obj/%.o:	src/%.cpp
			$(COMPILER) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
			mkdir $(OBJ_DIR)
$(BIN_DIR):
			mkdir $(BIN_DIR)

run:
			./bin/$(BIN)

clean:
			rm -f obj/*

fclean:		clean
			rm -rf bin/* 

re:			fclean all

.PHONY:		all clean re run