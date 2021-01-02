#include <iostream>

int main() { 
  int n = 4; 
  for (int rows = 1; rows <= n; ++rows) { 
	for (int pound = 1; pound <= rows; ++pound) { 
		std::cout << "#"; 
	}
	std::cout << "\n"; 
  }
  for (int rows = 1; rows <= n; ++rows) { 
	for (int pound = 1; pound <= 8 - (4 + rows); ++pound) { 
		std::cout << "#"; 
	}
	std::cout << "\n"; 
  }
  return 0; 
}
