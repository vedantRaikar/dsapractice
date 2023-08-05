#include<iostream>

using namespace std; 

void printarr( int arr[] , int n){
	static int i = 0 ; 
	
	if(i == n){
		return;
	}
	else{
		cout << arr[i];
		i++;
		printarr( arr , n);
	}
	
	
}

int main() {
	 int arr[100];
	 int n ;
	 cout << "Enter the lenght of the array: ";
	 cin >> n ;
	 cout << "Enter the elements of the array: ";
	 for(int i =0 ; i < n ; i++){
	 	cin>>arr[i];
	 	cout<<" ";
	 	}
		 
	printarr( arr , n)	;
	
	return 0;
}
