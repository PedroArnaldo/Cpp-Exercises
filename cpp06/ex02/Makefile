CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp ClassGenerate.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = dynamicCast

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
