CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS = ./src/main.cpp ./src/Exceptions.cpp ./src/BitcoinExchange.cpp ./src/Date.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = btc

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
