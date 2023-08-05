#include<iostream>

using namespace std ; 

int summation(int num){
	static int sum = 0 ;
	
	if( num != 0){
	
        sum = sum + (num%10);
		summation(num/10);
	}
	return sum ;
}

int main() { 
  int no , k ; 
  cout << "Enter the number: ";
  cin >> no ; 
  k = summation(no);
  cout << "The sum of the numbers is " << k ; 
  return 0 ; 
}
