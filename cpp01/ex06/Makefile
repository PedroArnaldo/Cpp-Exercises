NAME = harlFilter

CPP = c++

CPPFLAGS = -Wextra -Wall -Werror -std=c++98

SOURCE = main.cpp Harl.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	$(CPP) $(CPPFLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: fclean all

start:
	make && ./replace

.PHONY: re, fclean, clean, all, start