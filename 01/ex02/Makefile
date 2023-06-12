# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 16:50:40 by arurangi          #+#    #+#              #
#    Updated: 2023/06/12 16:51:13 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =   this_is_brainz
CC          =   c++ $(VERSION)
VERSION     =   -std=c++98
FLAGS       =	-Wall -Wextra -Werror
DEBUG_FLAGS =   $(FLAGS) -Wconversion -g -fsanitize=address

SRC         =     main.cpp \
									

OBJS        =   ${SRC:.cpp=.o}
%.o: %.c
		$(CC) $(FLAGS) $(INC) -cpp $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INC) -o $(NAME) $(SRC)

minimal:
		$(CC) $(INC) -o $(NAME) $(SRC)

run:
	./$(NAME)

debug: $(OBJS)
	$(CC) $(DEBUG_FLAGS) $(INC) -o $(NAME) $(SRC)

clean:
				rm -f $(OBJS)

fclean:	clean
				rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re run