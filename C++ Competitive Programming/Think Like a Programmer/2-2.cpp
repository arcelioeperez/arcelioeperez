#include <iostream> 
using namespace std; 

int main() {
  //up side pyramid 
  int top_part = 4; 
  for (int rows = 0; rows < top_part; ++rows) { 
	for (int spaces = 0; spaces < top_part - (rows + 1); ++spaces) { 
		cout << " "; 
	}
	for (int pound = 0; pound < (rows + 1) * 2; ++pound) { 
		cout << "#"; 
	}
	cout << "\n"; 
  }
  
  int n = 4; 
  for (int rows = 0; rows < n; ++rows) { 
	for (int spaces = 0; spaces < rows; ++spaces) { 
		cout << " "; 
	}
	for (int pound = 0; pound <  8 - (rows * 2); ++pound){ 
		cout << "#"; 	  
	}
	cout << "\n"; 
  } 

  return 0; 
}
