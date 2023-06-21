# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 17:22:14 by arurangi          #+#    #+#              #
#    Updated: 2023/06/21 17:12:57 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### executable
BIN			=   Harl

### directories
SRC_DIR		=	src/
OBJ_DIR		=	obj/
BIN_DIR		=	bin/

### files
FILES		=	Harl main UserInterface
SOURCES		=	$(addsuffix .cpp, $(FILES))
OBJECTS		=	$(addprefix $(OBJ_DIR), $(SOURCES:.cpp=.o))

### variables
COMPILER	=   c++ -std=c++98 $(OPTIMIZE)
OPTIMIZE	=	-O2
INCLUDES	=	-I ./includes
FLAGS       =	-Wall -Wextra -Werror
DFLAGS		=	-Wconversion -g -fsanitize=address

### rules
all:		$(BIN)

$(BIN): $(OBJECTS)
			$(COMPILER) $(OBJECTS) -o $(BIN)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
			mkdir -p $(@D)
			$(COMPILER) $(INCLUDES) $(FLAGS) -c $< -o $@

run:
			@./$(BIN) INFO

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(BIN)

re:			fclean all

.PHONY:		all clean fclean re