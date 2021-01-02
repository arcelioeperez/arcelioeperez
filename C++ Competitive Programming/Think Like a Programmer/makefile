#makefile for Think Like a Programmer 
#change 2-3.cpp for any program you want to compile and run
#type **make** to compile and run 
#make clean --> to delete the e executable
all: run

CXX = g++ 
CXXFLAGS = -Wall -pedantic-errors -std=c++14 -O2

e: 
	$(CXX) $(CXXFLAGS) -o e 2-3.cpp 

.PHONY: all run clean
run: e 
	./e 
clean: 
	rm e
