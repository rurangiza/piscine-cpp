# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 17:22:14 by arurangi          #+#    #+#              #
#    Updated: 2023/06/14 21:37:40 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN			=   runthis
CC          =   c++ $(VERSION)
VERSION     =   -std=c++98
FLAGS       =	-Wall -Wextra -Werror
DEBUG_FLAGS =   $(FLAGS) -Wconversion -g -fsanitize=address

SRC			=	src/main.cpp \
									
OBJS		=	obj/main.o \

# OBJS        =   ${SRC:.cpp=.o}

obj/%.o:	src/%.cpp
			$(CC) $(FLAGS) -c $< -o $@

all:	$(BIN)

$(BIN):	$(OBJS)
		$(CC) $(FLAGS) $(SRC) -o ./bin/$(BIN)

run:
		./bin/$(BIN)

debug:	$(OBJS)
		$(CC) $(DEBUG_FLAGS) $(INC) $(SRC) -o ./bin/$(BIN)

clean:
		rm -f obj/* assets/*.replace

fclean:	clean
		rm -rf bin/* 

re:		fclean all

.PHONY:	all clean re run