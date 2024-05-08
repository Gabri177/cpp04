# Makefile

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILE = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OFILE = $(CPPFILE:.cpp=.o)
NAME = Animal

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