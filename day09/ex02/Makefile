NAME    = PmergeMe
CC      = c++
CFLAGS  = -Werror -Wextra -Wall -std=c++98
SRC     = main.cpp PmergeMe.cpp
OBJ     = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp PmergeMe.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all