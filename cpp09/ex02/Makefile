CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS = main.cpp PmergeMe.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = PmergeMe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

fclean: clean

re: fclean all

.PHONY: re, fclean, clean, all
