CXX=g++ -std=c++11 -Wall -pedantic
LDFLAGS=-I/usr/include -lncurses
LIBS=-lGL -lGLU -lglut -lGLEW
PROJECT='Legend of Maria'
TARGET=LegendOfMaria

SRC:=$(wildcard *.cpp)
OBJ:=$(SRC:.cpp=.o)

all: $(OBJ)
	@$(CXX) $(LDFLAGS) $(LIBS) $(OBJ) -o $(TARGET)

%.o: %.cpp
	@echo "Compiling $<.."
	@$(CXX) $(LDFLAGS) $(LIBS) -c $< -o $@

run:
	./$(TARGET)

class:
	./.cpp_class.sh $(NAME) $(PROJECT)

clean:
	rm -rf *.o $(TARGET)

.PHONY: clean class run
