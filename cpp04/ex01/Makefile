NAME = ex01

CPP = c++

CPPFLGS = -Wextra -Wall -Werror -std=c++98

SOURCE = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	$(CPP) $(CPPFLGS) $(SOURCE) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re, fclean, clean, all