NAME	= ex00
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJ		= $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all