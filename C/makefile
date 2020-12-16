#command line 
# g++ -I /usr/local/boost_1_74_0 -std=c++11 ETL.cpp main.cpp -o main
# ./main winedata.csv "," 
# if header = true
# ./main winedata.csv "," header = true
CXX = clang++ 
CFLAGS = -I /usr/local/boost_1_74_0 -std=c++11 

main: 
	$(CXX) $(CFLAGS) ETL.cpp main.cpp -o main

.PHONY = run clean

run: 
	./main winedata.csv ","
clean: 
	rm main
