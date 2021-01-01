#makefile for Think Like a Programmer 
all: run

CXX = g++ 
CXXFLAGS = -Wall -pedantic-errors -std=c++14

e: 
	$(CXX) $(CXXFLAGS) -o e *.cpp 

.PHONY: all run clean
run: e 
	./e 
clean: 
	rm e
