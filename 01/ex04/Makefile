# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 17:22:14 by arurangi          #+#    #+#              #
#    Updated: 2023/06/15 12:23:21 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   runthis
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

all:	$(NAME)

$(NAME):	$(OBJ_DIR) $(BIN_DIR) $(OBJ_FILES)
			$(COMPILER) $(OBJ_FILES) -o $(BIN_DIR)/$(NAME)

$(OBJ_DIR):
			mkdir obj
$(BIN_DIR):
			mkdir bin

run:
			./bin/$(BIN)

clean:
			rm -f obj/* assets/*.replace

fclean:		clean
			rm -rf bin/* 

re:			fclean all

.PHONY:		all clean re run