#include<iostream> 
using namespace std;

int term ;


int fibo(int first , int second ){

 static int i = 1 ;
 int nxt ;
 
 if( i == term){
 	return 0 ;
 }
 else{
 	nxt = first + second ;
 	first = second ;
 	second = nxt ;
 	
 	cout << nxt << " ";
 	i++;
 	
 	fibo(first ,  second );
 	
 }
 return 0 ; 
}
 
 int main (){
 	int first = 0 ; int second = 1 ;
 	int terms ; 
 	cout << "Enter the limit of terms you want : ";
 	cin >> term;
 	cout << "The terns of the fibonacci series is : ";
 	cout << first << " "; 
 	cout << second << " ";
 	fibo(first , second);
 	return 0;
 	
 }

