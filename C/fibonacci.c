//Fibonacci sequence util 255 in C

#include <stdio.h>

int main() { 
	int x = 0; 
	int y = 1; 
	int z; 
	
	while (z <= 255) { 
		printf("%d\n", z); 
		z = x + y; 
		x = y; 
		y = z;
	//	printf("%d\n", z); --> it would print the 377  
		
	}

	return 0; 
}
