# Makefile

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILE = AMateria.cpp Character.cpp  Cure.cpp Ice.cpp main.cpp MateriaSource.cpp
OFILE = $(CPPFILE:.cpp=.o)
NAME = Interfaz

all: $(NAME)

$(NAME): $(OFILE)
	g++ $(CPPFLAGS) -o $(NAME) $(OFILE)

%.o:%.cpp
	g++ $(CPPFLAGS) -c -Wshadow $< -o $@

clean:
	$(RM) $(OFILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re