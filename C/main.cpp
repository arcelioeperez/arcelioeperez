#define NDEBUG
#include "ETL.h"

#include <iostream>
#include <string>
#include <Eigen/Dense>
#include <boost/algorithm/string.hpp>

#include <vector>

int main(int argc, char *argv[]) {
	ETL etl(argv[1], argv[2], argv[3]); 

	vector<vector<string>> dataset = etl.readCSV();
	int rows = dataset.size(); 
	int cols = dataset[0].size(); 
  
	Eigen::MatrixXd dataMat = etl.CSVtoEigen(dataset,rows,cols);

	cout << dataMat << endl; 
	return EXIT_SUCCESS; 
}

