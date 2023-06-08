
NAME        =   accounts
CC          =   c++ $(VERSION)
VERSION     =   -std=c++98
FLAGS       =	-Wall -Wextra -Werror
DEBUG_FLAGS =   $(FLAGS) -Wconversion -g -fsanitize=address

INC         =	  -I./includes
SRC         =     tests.cpp \
				  Account.cpp \

OBJS        =   ${SRC:.cpp=.o}
%.o: %.c
		$(CC) $(FLAGS) $(INC) -cpp $< -o $@
	
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INC) -o $(NAME) $(SRC)

minimal:
		$(CC) $(INC) -o $(NAME) $(SRC)

debug: $(OBJS)
	$(CC) $(DEBUG_FLAGS) $(INC) -o $(NAME) $(SRC)

clean:
				rm -f $(OBJS)

fclean:	clean
				rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re run