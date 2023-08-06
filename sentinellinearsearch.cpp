#include<iostream>

using namespace std ;

int sentinelsearch(int arr[] , int n , int key){
	
	int last = arr[n-1];
	arr[n-1] = key ; 
	int i=0 ; 
	
	while(arr[i]!=key){
		i++;
	}
	
	arr[n-1] = last ; 
	
	if(i < n-1 || arr[n-1] == key){
		cout <<"The element found at the position : " << i + 1;
	}
	else {
		cout << "Element not found";
		
	}
	
	
	
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int key; 
	cout << "Enter the element to be searched : ";
	cin >> key ; 
	
	sentinelsearch(arr , n , key);
	
	return 0 ;
}
