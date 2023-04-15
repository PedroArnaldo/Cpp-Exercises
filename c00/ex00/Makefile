CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
RM = rm -fr
SRC = megaphone.cpp

$(NAME): 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

fclean: 
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
