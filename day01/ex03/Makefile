NAME	= Unnecessary_violence
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ		= $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) Weapon.hpp HumanA.hpp HumanB.hpp
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all