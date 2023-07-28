NAME := work

CXX := clang++

CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -I./include

SOURCE :=	./main.cpp \
			./src/Bureaucrat.cpp


all: $(NAME)

$(NAME):	$(SOURCE)
			$(CXX) $(CXXFLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all

.PHONY: all, clean, fclean, re
