NAME    = RPN
CC      = c++
CFLAGS  = -Werror -Wextra -Wall -std=c++98
SRC     = main.cpp RPN.cpp
OBJ     = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp RPN.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all