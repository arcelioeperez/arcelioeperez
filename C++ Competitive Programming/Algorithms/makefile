#makefile TwoPointerMethod.cpp

all: run 

CXX = clang++ 
CXXFLAGS = -Wall -O2 -pedantic-errors -std=c++11

e: 
	$(CXX) $(CXXFLAGS) -o e TwoPointerMethod.cpp
.PHONY: all run clean
run: e 
	./e
clean: 
	rm e
