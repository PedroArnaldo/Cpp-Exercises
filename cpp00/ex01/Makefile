NAME = note

CC = c++
CPPFLAGS = -Wextra -Wall -Werror -std=c++98

RM = rm

FILES = PhoneBook.cpp Contact.cpp

SOURCE = $(addprefix src/, $(FILES)) \
		main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SOURCE) -o $(NAME)

clean: $(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: re, fclean, clean, all
