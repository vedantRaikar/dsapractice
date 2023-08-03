#include <iostream>
#include<bits/stdc++.h>
using namespace std; 

void find3largest(int arr[] , int n)
{
	sort(arr , arr + n);
	
	int check = 0 , count = 1 ;
	for( int i = 1 ; i <= n ; i++){
		if (count < 4){
			if(check != arr[n-i]) {
				
				cout << arr[n-i] <<" ";
				check = arr[n - i];
				count ++;
			}
		}
		else 
		 break ; 
	}
		
}

int main () 
{
	int arr[10];
	int n ; 
	cout << "Enter the leanght of the array : ";
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	
	find3largest(arr , n);
	
	
}

