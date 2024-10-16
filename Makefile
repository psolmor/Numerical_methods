CXX = g++
CXXFLAGS = -Wall -std=c++11 -I../include


SOURCES = ../src/main.cpp ../src/root_finding/bisection.cpp ../tests/test_func.cpp ../src/root_finding/newton_method.cpp ../src/root_finding/secant.cpp
OBJECTS = $(SOURCES:../%.cpp=%.o)
EXECUTABLE = main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

%.o: ../%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)