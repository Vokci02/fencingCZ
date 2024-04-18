# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -pedantic -Wextra -g

# target
TARGET = fencingCZ

# Source files
SRC = $(wildcard *.cpp)

# Object files
OBJ = $(SRC:.cpp=.o)


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET) 

