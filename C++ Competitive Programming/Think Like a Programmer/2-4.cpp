#include <iostream> 
//creating a symetrical figure with for loops 
int main() { 
  //equilateral triangle 
  int n; 
  n = 5; 

  for (int rows = 1; rows <= n; ++rows) { 
	for (int spaces = 1; spaces <= n - rows; ++spaces) { 
		std::cout << " "; 
	}
	for (int stars = 1; stars <= rows; ++stars) { 
		std::cout << "* "; 
	}
	std::cout << "\n"; 
  }

  return 0;	  
}
