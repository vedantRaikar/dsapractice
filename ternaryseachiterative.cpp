#include<bits/stdc++.h>

using namespace std ;

int ternarysearch(int ar[] , int l , int h , int key){
	int mid1 , mid2 ;
	mid1 = l - (h-l)/3;
	mid2 = h - (h-1)/3;
	
	while(h >= l){
		if(ar[mid1]==key){
			return mid1;
		} 
		if(ar[mid2]==key){
			return mid2;
		}
		
		if(key < mid1){
			h = mid1 - 1;
		}
		else if (key > mid2){
			l = mid2 + 1;
		}
		else {
			l = mid1 + 1 ;
			h = mid2 - 1 ;
		}
	return -1;
	}
	
	
}

int main(){
	int l , h , key , result ; 
	int ar[] = {1,2,3,4,5,6,7,8,9,34};
	l = 0 ; 
	h = sizeof(ar) / sizeof(ar[0]);
	key = 8;
	result = ternarysearch(ar , l , h , key);
	
	if(result == -1 ){
		cout << "The key was not found !";
	}
	else{
		cout << "The key was found at " << result ; 
	}
	
}
