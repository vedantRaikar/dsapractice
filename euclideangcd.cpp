#include<iostream>
using namespace std; 

int gcd(int a , int b) { 
  if(b==0)
    return a ; 
  return gcd(b , a%b); 
  
}


int main(){
	int num1 , num2 ; 
	cout<< "Enter the two interges";
	cin >> num1 >> num2 ; 
	int result = gcd(num1 , num2);
	cout<< result;
	return 0 ; 
}

