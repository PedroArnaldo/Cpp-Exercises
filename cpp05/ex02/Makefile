NAME = work01

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE =	./main.cpp \
			./Bureaucrat.cpp \
			./AForm.cpp	\
			./ShrubberyCreationForm.cpp

$(NAME):	$(SOURCE)
			$(CXX) $(CXXFLAGS) $(SOURCE) -o $(NAME)

all: $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
