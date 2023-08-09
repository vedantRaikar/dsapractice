#include<bits/stdc++.h>

using namespace std ; 

int reverse(int arr[] , int start , int end){
	while( start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start ++ ;
		end -- ;
		
	}
}


void print(int arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		cout << arr[i] << endl; 
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6};
	int start = 0 ;
    int end = sizeof(arr)/sizeof(arr[0]);
	reverse( arr , start , end - 1);
	print(arr , end  );
}
