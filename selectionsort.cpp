//
// Created by vedant raikar on 11-08-2023.
//
#include<bits/stdc++.h>

using namespace std ;

void sort( int arr[] , int n) {
    int i , j , min;
    for(i = 0 ; i < n - 1 ; i++){
        min = i ;
        for( j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[min]){
                min = j ;
            }
        }

        if(min != j){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }


    }

}

void print( int arr[] , int n){
 for(int i = 0 ; i < n ; i++){
     cout<< arr[i] << " ";
 }

}

int  main( ){
    int arr[] ={ 23,32,4,2,3,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "the array before sorting : ";
    print (arr , n );
    sort(arr , n );
    cout<<"the array after sorting is : ";
    print(arr , n );
}
