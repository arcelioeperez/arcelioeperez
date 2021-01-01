#include <iostream>
using namespace std; 

int main () { 
  int n = 4; 
  for (int rows = 0; rows < n; ++rows) {
	for (int spaces = 0; spaces < rows; ++spaces) { 
		cout << " ";
	}
		for (int pound = 0; pound < 8 - (rows * 2); ++pound) { 
			cout << "#"; 
	  }
 cout << "\n";  
}
  return 0; 
}
