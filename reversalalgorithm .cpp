//
// Created by vedant raikar on 10-08-2023.
//
#include<bits/stdc++.h>

using namespace std;

void rotate(vector<int> &arr , int n , int d){
    d = d%n ;
    reverse(arr.begin() , arr.begin() + d);
    reverse( arr.begin() + d , arr.end());
    reverse( arr.begin() , arr.end());

}

void print(vector<int> &arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

}


int main(){
    vector <int> arr  = {2,4,6,7,8,5};
    int n = arr.size();
    int d = 2 ;
    rotate( arr , n , d);
    print(arr , n );
}

