NAME = ClapTrap

CPP = c++

CPPFLGS = -Wextra -Wall -Werror -std=c++98

SOURCE = main.cpp ClapTrap.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	$(CPP) $(CPPFLGS) $(SOURCE) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re, fclean, clean, all