# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 11:37:13 by arurangi          #+#    #+#              #
#    Updated: 2023/06/22 15:10:47 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### executable
BIN			=   runthis

### directories
SRC_DIR		=	src/
OBJ_DIR		=	obj/
BIN_DIR		=	bin/

### files
FILES		=	main
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
			@./$(BIN) DEBUG

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(BIN)

re:			all clean fclean run

################################################################################

MSG	=	updated

push:
	git add .
	git commit -m "$(MSG)"
	git push

purge:
	find . \( -name ".DS_Store" -or -name ".vscode" -or -name ".idea" \) -exec rm -rf {} +

.PHONY:		all clean fclean re run