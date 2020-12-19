#include <iostream> 
#include <set>
using namespace std; 

/* A set contains a collection of elements.
 *
 *Basic operations: insertation, seach, and removal
 *Based on a balanced binary tree - O(log n) time
 *unordered_set() uses hashing, works in O(1) on **avg**
 */

#define I insert 

int main() { 
	set<int> s; 
	s.I(3); 
	s.I(2); 
	s.I(5); 

	cout << s.count(3) << "\n"; //returns 1 
	cout << s.count(4) << "\n"; //returns 0 

	//erase 
	s.erase(3); 
	s.I(4); 

	cout << s.count(3) << "\n"; //returns 0 
	cout << s.count(4) << "\n"; //returns 1

	//set could be used mostly like vectors, but it isn't possible to access
	//the elements using the [] notation
	set <int> s1 = {2, 5, 6, 8}; 
	cout << s1.size() << "\n"; //4

	for (auto x : s1) { 
	  cout << "Auto Loop - set example: " <<  x << "\n"; 
	}

	//sets are **distinct** 
	//count could only return 1 if item is in the set 
	//or 0 if it's not 
	

	//Multiset and unordered_multiset
	multiset<int> ms; 
	ms.I(5);
	ms.I(5); 
	ms.I(5); 
	ms.I(2); 

	cout << "Multiset ms: " << ms.count(5) << "\n"; //returns 3 
	//ms.erase(5) removes all the instances of 5
	
	//only removes one instance of 5
	ms.erase(ms.find(5)); 
	cout << ms.count(5) << "\n"; //2 
	
	return 0;  
}

