CC		=	c++ #-std=c++98
FLAGS	=	-Wall -Werror -Wextra

PATH_00	=	./ex00

ex00:
	$(CC) $(FLAGS) -o runthis $(PATH_00)*.cpp

run:
	./ex00/runthis