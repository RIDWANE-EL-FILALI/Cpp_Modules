NAME	= Converter
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= Converter.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Converter.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	${RM} ${OBJ} ${NAME}

fclean: clean
	rm -f $(NAME)

re: fclean all