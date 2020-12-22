#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
  
  //passing vector 'v' as a reference
  
    int searchInsert(vector<int>& v, int target) {
       int start = 0,end = v.size()-1,mid;
        
        while(start < end)
        {
            mid  = (start + end) /2;
            if(v[mid] == target)
                  return mid;
            
            
            if(v[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1; 
            }
        }
        
        if(v[start] >= target)
           return start;
        
        return start + 1;
        
    }
};


int main() {

vector<int> vect{1,3,5,6}; 
int target = 5; 
  
//creating an object  
Solution obj1; 

//obj1.searchInsert(vect, target); 

//calling the function 
 cout << obj1.searchInsert(vect, target) << endl;
 return 0; 
}
