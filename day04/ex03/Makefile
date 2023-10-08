NAME	= ex03
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJ		= $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all