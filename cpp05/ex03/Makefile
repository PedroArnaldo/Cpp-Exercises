NAME = work01

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE =	./main.cpp \
			./Bureaucrat.cpp \
			./AForm.cpp	\
			./ShrubberyCreationForm.cpp \
			./RobotomyRequestForm.cpp \
			./PresidentialPardonForm.cpp

$(NAME):	$(SOURCE)
			$(CXX) $(CXXFLAGS) $(SOURCE) -o $(NAME)

all: $(NAME)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all

run:	
	./$(NAME)

.PHONY: all clean fclean re run
