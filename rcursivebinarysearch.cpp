#include<bits/stdc++.h>

using namespace std;

int recursivebinarysearch(int arr[] , int l , int h , int key){
	int m ;
	m = l + (h - 1)/2;
	
	while(l < h){
		if(arr[m] == key){
			return m ;
		}
		else if (arr[m] < key){
			return recursivebinarysearch(arr , m + 1 , h , key);
		}
		else{
			return recursivebinarysearch(arr , l , m -1 , key);
		}
	}
	return -1 ;	
}

int main(){
	int arr[]= {1,2,3,4,5,6,7,8,9};
	int key = 23 ;
	int l = 0 ; 
	int h = sizeof(arr) / sizeof(arr[0]);
	
	int result = recursivebinarysearch(arr , l , h -1 , key);
	
    if(result == -1){
    	cout << "The element not found";
	}
	else{
		cout << " The element found at " << result + 1;
	}
	
	return 0;
	
}
