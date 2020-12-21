all: run 

CXX = clang++
CXXFLAGS = -Wall -std=c++11 -O2

e: 
	$(CXX) $(CXXFLAGS) -o e *.cpp

.PHONY: all run clean
run: e
	./e 
clean: 
	rm e 
