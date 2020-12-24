/*
Original Version used an array.
This version uses a vector.
 */

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vect;
 

bool pairsum(vect v, int X) {
  //second pointer
  int j = v.size() - 1;
  int i = 0; 
    while (i < j) {
      //pair
      if (v[i] + v[j] == X) {
	return 1;
      }
      //if sum of pairs is < X then increment first pointer
      else if (v[i] + v[j] < X) {
	//i = i + 1;
	i++;
      }
      //sum of pairs > X then decrement second pointer
      else {
	//j = j - 1;
	j--;
      }


    }
  
  return 0; 

}


int main() {

  vect nv = {4, 7, 2, 5, 3, 9};

  int search_val = 9;
  //returns 1 or 0
  //1 if there is a pair
  
  cout << pairsum(nv, search_val) << endl;
  return 0; 

}
