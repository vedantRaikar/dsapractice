//
// Created by vedant raikar on 11-08-2023.
//
#include<bits/stdc++.h>
using  namespace std;

void bubbleSort(int a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);

            }
        }

    }
}

void print(int a[] , int n ) {
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}


int main() {
    int a[] = {23 , 32, 45,12,934};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"the array before printing : ";
    print(a , n);
    bubbleSort(a , n);
    cout<<"after the bubble sort: ";
    print(a , n);
}