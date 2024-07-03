CXX = g++
CXXFLAGS = -c -Wall

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
TARGET = main

all: $(TARGET)

$(TARGET):$(OBJS)
	$(CXX) -o $@ $^

%.o:%.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

#.PHONY: clean

clean:
	rm -f  $(OBJS) $(TARGET)

run: $(TARGET)
	@./$(TARGET)