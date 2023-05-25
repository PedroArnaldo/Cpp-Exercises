NAME =  DiamondTrap

CPP = c++

CPPFLGS = -Wextra -Wall -Werror -std=c++98

SOURCE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	$(CPP) $(CPPFLGS) $(SOURCE) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re, fclean, clean, all