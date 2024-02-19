NAME	= Bureaucrat
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= Bureaucrat.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Bureaucrat.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	${RM} ${OBJ} ${NAME}

fclean: clean
	rm -f $(NAME)

re: fclean all