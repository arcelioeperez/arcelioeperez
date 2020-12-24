// Pointers and References Practice 

#include <iostream>
#include <string>
using namespace std; 

int main() { 
  int a = 5; 
  int b = 2; 

  //ODD NUMBER
  int aa = a & 1; 
  cout << "Result of a & 1: - odd" <<  aa << endl; 

  //EVEN NUMBER
  int bb = b & 1; 
  cout << "Result of b & 1 - even: " << bb << endl; 

  //EVEN NUMBER
  int cc = 100 & 1; 
  cout << "Result of cc & 1 - even: " << cc << endl; 

  //Declaring a pointer
  int* ptr; 
  int num = 200; 

  //Assigning the address of num to ptr
  ptr = &num; 
  cout <<"ptr: " << ptr << endl; 

  cout << &num; 

  cout <<"&num: " <<  *ptr << endl; 

  *ptr = 100; 
  cout << num << endl;  

  string carro = "carro"; 

  string& automovil = carro; 

  cout << carro << endl; 

  cout << "reference string& automovil: " << automovil << endl; 

  int arr[5] = {2,4,5,6,7}; 
  int* ptr_arr; 
  ptr_arr = arr; 

  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) { 
    cout << "arr[" << i << "]" << "=" << *(ptr_arr + i) << endl; 
  }

  int newarr[10] = {2,3,4,5,6,7,8,6,5}; 
  int *n_ptr_arr; 

  n_ptr_arr = newarr; 

  for (int i = 0; i< sizeof(newarr)/sizeof(newarr[0]); ++i) { 
    cout << "Memory Addresses[" << i << "]"<< "=" << n_ptr_arr + i << endl; 
  }

  
} 
