#include<iostream>
#include<string.h>

using namespace std;

int count(int num){
	static int counter = 0;
	if (num == 0 ){return 0;}
	else{
	  counter++ ;
	  count(num/10);
	}
	
	return counter;
}

int main(){
int digits;
int num ;
cout << " Enter the digits: ";
cin >> num ; 

digits = count(num);
cout << " the number of digits are " << digits ;	
return 0;	
}
