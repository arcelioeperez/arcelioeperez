#ifndef ETL_h
#define ETL_h 

#include <iostream> 
#include <fstream> 
#include <Eigen/Dense>
#include <string>
#include <vector>
using namespace std; 

class ETL { 
	string dataset; 
	string delimiter; 
	bool header; 

public: 

	ETL(string data, string separator, bool head) : dataset(data), delimiter(separator), header(head){}

Eigen::MatrixXd CSVtoEigen(vector<vector<string>> dataset, int rows, int cols);

	vector<vector<string>> readCSV();
}; 

#endif
