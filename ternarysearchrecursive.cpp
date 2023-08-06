#include<iostream>

using namespace std; 

int ternary(int arr[] , int l , int h , int key ){
	
	int mid1 , mid2 ;
	mid1 = l -(h-l)/2;
	mid2 = h -(h-l)/2;
	
	while(h > l){
		if(key == arr[mid1]){
			return mid1;
		}
		if(key == arr[mid2]){
			return mid2;
		}
		
		if( key < arr[mid1]){
			return ternary(arr , l , mid1 - 1 , key);
		}
		else if (key > arr[mid2]){
			return ternary(arr , mid2 + 1 , h , key);
		}
		else{
			return ternary(arr , mid1 + 1 , mid2 - 1 , key);
		}
		return -1 ;
	}
	
	
}

int main(){
	int l , h , p , key ;
	int arr[] = {1,2,3,4,5,6,7,8,9,12,23,34,45,56,67};
	l = 0 ;
	h = sizeof(arr) / sizeof(arr[0]);
	
	key = 34;
	
	int result = ternary(arr , l , h-1 , key);
	
	if(result == -1 ){
		cout << "The key was not found";
	}
	else{
		cout << "The key was found at "<< result + 1;
	}
	return 0 ;
	
}
