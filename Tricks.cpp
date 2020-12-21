/*
Citation: GeeksForGeeks 

C++ Tricks for Competitive Programming

URL: https://www.geeksforgeeks.org/c-tricks-competitive-programming-c-11/

*/

#include <iostream> 
#include <cmath> 
using namespace std; 
bool is_power2(int x) {
	return x && (!(x&(x-1)));  
}


int main() {
	//First 
 
	int num; 	
	cout << "Enter a number: "; 
	cin >> num; 
	//checking if a number is even or odd without modulo 
	if (num & 1) { 
		cout << "Number is odd" << endl;
		
	}
	else { 
		cout << "Number is EVEN" << endl; 
	} 

	//Second 
	//Fast multiplication or division by 2 
	//Multipliying by 2 means shifting all the **bits** to the left 
	//Dividing by 2 means shifting all the **bits** to the right
	int num1, num2; 						
	num1 = num << 1; //Multipliying by two  
	num2 = num >> 1; //Dividing by two 

	cout << "Multiplication " <<  num1 << endl; 
	cout << "Division " <<  num2 << endl;

	//Third 
	//Swap two numbers using XOR ^= 
	int a, b; 
	a = 10; 
	b = 20; 
	cout << "a " << a << endl; 
	cout << "b " << b << endl; 
	
	a ^= b; 
	b ^= a;
	a ^= b;  
	cout << "a after xor " << a << endl; 
	cout << "b after xor " << b << endl;

	//Fourth 
	//Most significant digit by using log 
	int N = 89;  
	double K = log10(N); 
	K -= floor(K); 
	int X = pow(10, K); 
	cout << "Most significant digit " << X << endl; 
	//Number of digits directly
	int NUM_DIGITS = 67; 
	NUM_DIGITS = floor(log10(N)) + 1; 
	cout << "Number of digits " << NUM_DIGITS << endl; 

	//Fifth 
	//power of two 
	cout << "Bool Function " << is_power2(800) << endl;  
	return 0; //success

	//Built in Algorithms
	//all_of --> all elements +, one element +, none +  
	//copy_n --> copies elements from one container to another
	//iots --> range of sequential values 

	//** #include <algorithm> ** 

	
}
