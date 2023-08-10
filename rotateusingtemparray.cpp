//
// Created by vedant raikar on 10-08-2023.
//
#include<bits/stdc++.h>
using namespace std ;
void print(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}
void rotate(int arr[] , int n , int d){
int temp[n];
int j = 0 ;

for( int i = d ; i < n ; i++){
    temp[j] = arr[i];
    j++;
}

for( int i = 0 ; i < d ; i++){
    temp[j] = arr[i];
}

for ( int i = 0 ; i < n ; i++){
    arr[i] = temp[i] ;
}
}


int main (){
int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
int d = 2 ;
rotate( arr , n , d);
print( arr , n);
}

