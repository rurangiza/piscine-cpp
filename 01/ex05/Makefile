# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 17:22:14 by arurangi          #+#    #+#              #
#    Updated: 2023/06/15 10:19:56 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### target
BIN			=   runthis

### directories
SRC_DIR		=	src
OBJ_DIR		=	obj

### files
SRC_FILES	=	$(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES	=	$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

### variables
COMPILER	=   c++ $(VERSION)
VERSION     =   -std=c++98
FLAGS       =	-Wall -Wextra -Werror
DEBUG_FLAGS =   $(FLAGS) -Wconversion -g -fsanitize=address

### rules
obj/%.o:	src/%.cpp
			$(CC) $(FLAGS) -c $< -o $@

all:		$(BIN)

$(BIN):		$(OBJ_FILES)
			$(CC) $(FLAGS) $(SRC_FILES) -o ./bin/$(BIN)

run:
			./bin/$(BIN)

clean:
			rm -f obj/* assets/*.replace

fclean:		clean
			rm -rf bin/* 

re:			fclean all

.PHONY:		all clean re run