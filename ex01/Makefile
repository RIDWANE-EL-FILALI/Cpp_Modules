NAME = PhoneBook.a
CC = c++
CFLAGS = -WERROR -WALL -WEXTRA -std=c++98
RM = rm -f
SRC = Contact.cpp PhoneBook.cpp

OBJ = ${SRC:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ) Contact.hpp PhoneBook.hpp
	ar -rc $(NAME) $(OBJ)
	@${CC} ${CFLAGS} main.cpp ${NAME} -o PhoneBook

clean :
	@${RM} ${OBJ} ${NAME}

fclean : clean
	@${RM} PhoneBook

re : fclean all