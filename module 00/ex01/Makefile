# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lupin <lupin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 15:16:45 by lupin             #+#    #+#              #
#    Updated: 2023/06/02 12:11:10 by lupin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =   phonebook
CC          =   c++
FLAGS       =   -std=c++98
FLAGS       +=	-Wall -Wextra -Werror
DEBUG_FLAGS =   $(FLAGS) -Wconversion -g -fsanitize=address

INC         =	  -I./includes
SRC         =	  src/main.cpp \
				  src/Phonebook.class.cpp \
				  src/helpers.cpp \


OBJS        =   ${SRC:.cpp=.o}
%.o: %.c
		$(CC) $(FLAGS) $(INC) -cpp $< -o $@

all: $(OBJS)
	$(CC) $(FLAGS) $(INC) -o $(NAME) $(SRC)

debug: $(OBJS)
	$(CC) $(DEBUG_FLAGS) $(INC) -o $(NAME) $(SRC)

clean:
				rm -f $(OBJS)		

fclean:	clean
				rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re run