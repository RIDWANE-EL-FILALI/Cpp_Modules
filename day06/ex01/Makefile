NAME	= Serializer
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= Serializer.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Serializer.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all