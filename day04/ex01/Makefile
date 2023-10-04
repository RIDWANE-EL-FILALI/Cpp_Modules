NAME	= ex00
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= main.cpp Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp
OBJ		= $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) Cat.hpp Dog.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all