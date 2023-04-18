CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

NAME = megaphone

SRC = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
