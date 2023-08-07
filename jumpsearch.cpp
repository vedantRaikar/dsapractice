#include<bits/stdc++.h>

using namespace std ; 

int jumpsearch(int arr[] , int size , int key){
	int end , start ; 
	start = 0 ;
	end = sqrt(size);
	
	while( key >= arr[end] && end < size){
		start = end ; 
		end += sqrt(size);
		
		if(end <= size - 1){
			end = size ; 
		}
		
	} 
	
	for(int i = start ; i < end ; i++){
		if(arr[i] == key ){
			return i ;
		}
	
	}
	return -1;
	

	
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,34,56,78};
	int size = sizeof(arr) / sizeof (arr[0]);
	int key = 34 ;
	int result = jumpsearch(arr , size , key);
	
	if( result == -1){
		cout << "The key not found ";
	}
	else {
		cout << "The key found at " << result ; 
	}
	return 0 ;
}

