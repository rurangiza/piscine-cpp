# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lupin <lupin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 15:16:45 by lupin             #+#    #+#              #
#    Updated: 2023/06/01 22:54:54 by lupin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CC			=	c++
FLAGS		=	-std=c++98
FLAGS		+=	-Wall -Wextra -Werror
SANITIZE	+=	-g -fsanitize=address
SRC			=	main.cpp \
				Megaphone.class.cpp \


OBJS		=	${SRC:.cpp=.o}
%.o: %.c
		$(CC) $(FLAGS)  -c $< -o $@

all: $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

debug:
	$(CC) $(FLAGS) $(SANITIZE) -o $(NAME) $(SRC)

clean:
				rm -f $(OBJS)		

fclean:	clean
				rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re run