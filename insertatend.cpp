//
// Created by vedant raikar on 10-08-2023.
//
#include<bits/stdc++.h>

using namespace std ;
void print( int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }

}

int insert(int arr[] , int n , int key , int cap){
if(n >= cap){return 1;}
else{
    arr[n] = key;
    return n+1;
}



}

int main() {
    int arr[20] = {1,2,3,4,5};
    int n = 5;
    int key = 23;
    int cap = sizeof(arr) / sizeof(arr[0]);
    cout<<" The array  before insertion: ";
    print(arr , n );
    n = insert(arr , n , key , cap);
    if(n==1){
        cout << "invalid" ;
    }
    else{
        cout << " the array after the insertion";
        print(arr , n );
    }

    print(arr , n );

}


