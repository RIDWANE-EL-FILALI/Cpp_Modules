NAME	= brainzz
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98

SRC		= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) Zombie.hpp
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all