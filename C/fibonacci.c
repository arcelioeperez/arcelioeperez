//Fibonacci sequence util 255 in C

#include <stdio.h>

#define UPPER 255 //Upper level 255

int main() { 
	int x = 0; 
	int y = 1; 
	int z; 
	
	while (x <= UPPER) { 
		printf("%d\n", x); 
		z = x + y; 
		x = y; 
		y = z;
	//	printf("%d\n", z); --> it would print the 377  
		
	}

	return 0; 
}
