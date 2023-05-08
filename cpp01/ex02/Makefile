NAME = notZombie

CPP = c++

CPPFLAGS = -Wextra -Wall -Werror -std=c++98

SOURCE = main.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	$(CPP) $(CPPFLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re, fclean, clean, all
