NAME	= ex02
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= Base.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) A.hpp B.hpp C.hpp Base.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all