#include<iostream>
using namespace std ; 

int print(int n){
  if(n <= 50){
  	cout<< n << " ";
  	print(n+1);
  }
}

int main (){
	int n = 1;
	print(n);
	return 0 ; 
	
}
