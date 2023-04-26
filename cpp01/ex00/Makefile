NAME = brainz

CPP = c++ 

CPPFLAGS = -Wextra -Wall -Werror -std=c++98

SOURCE = Zombie.cpp main.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	$(CPP) $(CPPFLAGS) $(SOURCE) -o $(NAME)

clean: 
	rm -fr $(NAME)

fclean: clean

re: fclean all

.PHONY: re, fclean, clean, all
