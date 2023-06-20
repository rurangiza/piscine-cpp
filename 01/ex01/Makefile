# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 06:57:34 by arurangi          #+#    #+#              #
#    Updated: 2023/06/20 14:32:20 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### executable
BIN			=   zombieland

### directories
SRC_DIR		=	src/
OBJ_DIR		=	obj/
BIN_DIR		=	bin/

### files
FILES		=	main newZombie randomChump Zombie zombieHorde
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
	./$(BIN)

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(BIN)

re:			fclean all

.PHONY:		all clean fclean re run