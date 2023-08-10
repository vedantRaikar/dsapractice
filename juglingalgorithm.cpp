//
// Created by vedant raikar on 10-08-2023.
//
#include<bits/stdc++.h>

using namespace std ;
int GCD( int a , int b ){
    if( b == 0){
        return a;
    }
    else{
        return(b , a % b);
    }

}

void juggel(int arr[] , int d  , int n){
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;

        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }

}
void  print(int arr[] , int n){
    for( int i = 0 ; i < n ; i++){
        cout<< a[i] << " ";
    }
}
int main (){
int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
int d = 2;

juggel(arr , d , n );
print( arr , n );

}

