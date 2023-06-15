# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 17:22:14 by arurangi          #+#    #+#              #
#    Updated: 2023/06/15 13:06:59 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN			=   runthis


COMPILER    =   c++ $(VERSION)
VERSION     =   -std=c++98
FLAGS       =	-Wall -Wextra -Werror
DEBUG_FLAGS =   $(FLAGS) -Wconversion -g -fsanitize=address

SRC_DIR		=	src
OBJ_DIR		=	obj
BIN_DIR		=	bin

SRC_FILES	=	$(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES	=	$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

obj/%.o:	src/%.cpp
			$(COMPILER) $(FLAGS) -c $< -o $@

all:	$(BIN)

$(BIN):	$(OBJ_DIR) $(BIN_DIR) $(OBJ_FILES)
			$(COMPILER) $(OBJ_FILES) -o $(BIN_DIR)/$(BIN)

$(OBJ_DIR):
			mkdir obj
$(BIN_DIR):
			mkdir bin

run:
			$(BIN_DIR)/$(BIN)

clean:
			rm -f $(OBJ_DIR)/* assets/*.replace

fclean:		clean
			rm -rf $(BIN_DIR)/*

re:			fclean all

.PHONY:		all clean re run