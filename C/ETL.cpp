#define NDEBUG
#include "ETL.h"

#include <vector>
#include <string>
#include <stdlib.h>
#include <boost/algorithm/string.hpp> 

using namespace std; 

vector<vector<string>> ETL::readCSV() {
	ifstream file (dataset); 
	vector<vector<string>> dataString; 

	string line = ""; 

	while(getline(file, line)){
		vector <string> vec; 
		boost::algorithm::split(vec, line, boost::is_any_of(delimiter)); 
		dataString.push_back(vec); 
	}
	file.close(); 

	return dataString; 
}

Eigen::MatrixXd ETL::CSVtoEigen(vector<vector<string>> dataset, int rows, int cols){
	if (header == true) { 
	  rows  = rows - 1; 
	}
	Eigen::MatrixXd mat(cols, rows); 
	for (int i =0; i<rows; i++){
		for (int j=0; j <cols;  ++j){
			mat(j,i) = atof(dataset[i][j].c_str()); 
		}
	}
	return mat.transpose(); 
}
