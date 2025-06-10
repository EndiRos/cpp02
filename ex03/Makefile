CC = g++
FLAGS = -Werror -Wextra -Wall -std=c++98 -g
SRC= src/Fixed.cpp src/main.cpp src/Point.cpp src/bsp.cpp
INCLUDE = -I include
OBJ = $(SRC:.cpp=.o)
NAME = ex03

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(OBJ) $(NAME)

re:	fclean $(NAME)
