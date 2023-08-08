#include<bits/stdc++.h>

using namespace std ; 


int interpolationsearch(int arr[], int l , int h , int key){
   
   while(l <= h && key >= arr[l] && key <= arr[h] ){
   	if (l == h && arr[l] == key){
   		return l ;
	   }
	else{
		return -1 ;
	}
	
	int pos = l + (((double)(h - l) /
            (arr[h] - arr[l])) * (key - arr[l]));
            
    
    if( arr[pos] == key){
    	return pos;
	}
	
	else if( arr[pos] > key){
    	l = pos + 1; 
	}
	 if( arr[pos] < key){
    	h = pos -1 ;
	}
   }
	
}

int main(){
	int l , h , key ;
	int arr[]  = {1,3,5,7,9,11,13,15};
	l = 0 ;
	h = sizeof(arr) / sizeof(arr[0]);
	key = 1;

    int result = interpolationsearch(arr , l , h, key);
    
    if(result == -1){
    	cout << "The key was not found ";
	}
	else{
		cout << "The key was found at position " << result+1 ;
	}
    
    
    
}
