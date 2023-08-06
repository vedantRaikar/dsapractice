#include<iostream>
using namespace std; 

int main(){
	int sum , a , b , *ap , *bp;
	cin >> a >> b;
	ap = &a ; 
	bp = &b ;
	
	sum = *ap + *bp ;
	 cout << "The sum of the two numbers is : " << sum ;
	 
	 return 0;
}
