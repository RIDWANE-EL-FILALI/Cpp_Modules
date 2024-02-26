NAME    = ex00
CC      = c++
CFLAGS  = -Werror -Wextra -Wall -std=c++98
SRC     = main.cpp
OBJ     = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp easyfind.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all