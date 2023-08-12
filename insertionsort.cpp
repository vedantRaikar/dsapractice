//
// Created by vedant raikar on 12-08-2023.
//
#include <bits/stdc++.h>
using namespace std ;

void insertionsort(int a[], int n ){
   int i , j , key;

   for(i = 1 ; i < n ; i++ ) {
       key = a[i];
       j = i - 1;

       while (j >= 0 && a[j] > key) {
           a[j+1] = a[j];
           j--;
       }
       a[j+1] = key;

   }
}

int main() {
    int a[] = {123,2,43,54,34,23,34};
    int n = sizeof(a) / sizeof(a[0]);
    insertionsort( a , n);
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    return 0 ;
}

