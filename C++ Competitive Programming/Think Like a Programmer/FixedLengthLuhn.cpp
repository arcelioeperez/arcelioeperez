#include <iostream> 

//Luhn Checksum - Doubling Digits 
//Fixed length example - 6 is the fixed lenght for this program
//Based on the book: Think Like A Programmer

int DoublingDigits(int digit) { 
  int doubled_digit = digit * 2; 
  int sum = 0; 
  if (doubled_digit >= 10) { 
	sum = 1 + doubled_digit % 10; 
  }
  else { 
	sum = doubled_digit; 
  }
  return sum; 
}

int main() { 
  char digit; 
  std::cout << "Enter a six-digit number: "; 
  int checksum = 0; 
  for (int position = 1; position <= 6; ++position) { 
	  std::cin >> digit; 
	  //USING ASCII TABLE - 0 == 48 to get the integer character 
	  //In this example if odd, double the digits
	  if (position % 2 == 0) checksum += digit - '0'; 
	  else { 
	  checksum += DoublingDigits(digit - '0'); 
	  }
  }
  std::cout << "CHECKSUM VALUE " << checksum << "\n"; 
  if (checksum % 10 == 0) std::cout << "Divisible by 10 - Valid" << ". \n";
  else std::cout << "Not Divisible by 10 - Invalid" << ". \n"; 

  return 0;
}
