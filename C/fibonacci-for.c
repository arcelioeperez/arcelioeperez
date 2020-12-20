#include <stdio.h>

#define UPPER 255 //Upper limit

int main() { 
  int x = 0; 
  int y = 1; 
  int z; 
  
  for (z; z<=UPPER; z=x+y){
	printf("%d\n", z);
	x = y; 
	y = z; 
  } 
  return 0; 
}
