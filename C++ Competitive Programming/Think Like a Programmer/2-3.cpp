#include <iostream> 
using namespace std; 

int main() {
  int n = 4; 
  for (int rows = 1; rows <= n; ++rows) { 
	for (int space = 1; space <= (rows - 1); ++space) { 
		cout << " "; 
	}
	for (int pound = 1; pound <= rows; ++pound) { 
		cout << "#"; 
	}
	//12, 8, 4, 0 spaces
	for (int space = 1; space <= 14 - 2 * ((rows -1) + rows);++space) { 
		cout << " "; 
	}
	for (int pound = 1; pound <= rows; ++pound) { 
		cout << "#"; 
	}
	cout << "\n"; 
  } 
  for (int rows = 1; rows <= n; ++rows) { 
	for (int space = 1; space <= 4 - rows; ++space){ 
		cout << " "; 
  }
	for (int pound = 1; pound <= 4 - (rows - 1); ++pound) { 
		cout << "#"; 
	}
	//0, 4, 8, 12
	for (int space = 1; space <= 14 - 2 * ((4 - rows) + (5 - rows)); ++space) { 
		cout << " "; 
	}
	for (int pound = 1; pound <= 4 - (rows - 1); ++pound) { 
		cout << "#"; 
	}
	cout << "\n"; 
  }
	
  return 0; 
}
