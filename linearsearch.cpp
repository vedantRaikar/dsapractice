#include<iostream>
using namespace std ;

int search(int arr[] , int n , int key){
	
	for( int i = 0 ; i < n ; i++){
		if (arr[i] == key){
			return key ;
		}
	}
 return -1 ;
}

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int n , key ;
	
	cout << "Enter the element to be searched : ";
	cin >> key ; 
	n = sizeof(arr) / sizeof(arr[0]);
	
	int result = search( arr , n , key);
	
	if(result == -1){
		cout << "The element was not found: ";
	}
	else{
		cout << "The element found at the position " << result ;
	}
	
return 0;	
	
}
