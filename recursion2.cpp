#include<iostream>

using namespace std; 

int sum (int high){
	int summ;
	int y = high ;
	if( y == 1){
		return 0 ;
	}
	else {
		summ = y + sum(y-1);
	}
	
	return summ ;
}


int main(){
	int low , high , summation  ; 
	cout << "Enter the  the higher limit: ";
	cin >> high ; 
	
	summation = sum(high);
	
	cout<<"The sum of the numbers in the range is: " << summation;
	
	
}
