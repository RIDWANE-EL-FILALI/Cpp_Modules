NAME = brainzz.a
CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98
RM = rm -f
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJ = ${SRC:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJ) Zombie.hpp
	@ar rc $(NAME) $(OBJ)
	@${CC} ${CFLAGS} ${NAME} -o brainzz

clean :
	@${RM} ${OBJ} ${NAME}

fclean : clean
	@${RM} brainzz
re : fclean all