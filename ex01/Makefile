NAME	= PhoneBook

CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98

SRC		= PhoneBook.cpp main.cpp Contact.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) PhoneBook.hpp Contact.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all