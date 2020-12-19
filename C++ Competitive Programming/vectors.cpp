#include <iostream>
#include <vector>

#define PB push_back 
using namespace std; 

int main() {
	vector<int> v; 
	v.PB(3); 
	v.PB(2);
	v.PB(5);

	cout << v[0] << "\n"; //3 
	cout << v[1] << "\n"; //2 
	cout << v[2] << "\n"; //5

//iterating through a vector
	for (int i = 0; i < v.size(); i++) { 
		cout << "Normal Loop" <<  v[i] << "\n"; 
	}
//a faster way 
	for (auto x : v) { 
	  cout << "Auto Loop:"<< x << "\n"; 
	}


//function back returns the last element in the vector
//pop_back removes the last element 

	cout<< v.back() << "\n"; //5 
	//v.pop_back();  //v = {3,2} 


//creating a vector with 5 elements 
//	vector<int> v  = {2, 4, 2, 5, 1}; 
//	vector<int> v = {10}; where 10 is the number of elements 
//	vector<int> v = {10, 5}; 5 is the first element 
//
//push_back() complexity is O(1) 

}


