NAME	= Bureaucrat4
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98
SRC		= Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@${RM} ${OBJ} ${NAME}

fclean: clean
	@rm -f $(NAME)
	@rm -f *_shrubbery

re: fclean all