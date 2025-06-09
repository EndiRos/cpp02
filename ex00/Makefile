XC = g++
XXFLAGS = -Wall -Werroe -Wextra -std=c++98 -g 
INCLUDE = -I include
SRC = src/Fixed.cpp src/main.cc
OBJ = $(SRC=.cpp : .o)
NAME = ex00

all: $(NAME)

$(NAME): $(OBJ)
	$(XC) $(XXFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(XC) $(XXFLAGS) $(INCLUDE) -c $< -o $@

clean: 
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all
