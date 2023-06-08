# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 17:35:24 by lupin             #+#    #+#              #
#    Updated: 2023/06/08 15:24:42 by arurangi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CC			=	c++
FLAGS		=	-std=c++98
FLAGS		+=	-Wall -Wextra -Werror
SANITIZE	+=	-g -fsanitize=address
SRC			=	megaphone.cpp


OBJS		=	${SRC:.cpp=.o}
%.o: %.c
		$(CC) $(FLAGS)  -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

debug:
	$(CC) $(FLAGS) $(SANITIZE) -o $(NAME) $(SRC)

clean:
				rm -f $(OBJS)		

fclean:	clean
				rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re run