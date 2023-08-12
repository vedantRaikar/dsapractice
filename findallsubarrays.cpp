//
// Created by vedant raikar on 12-08-2023.
//

#include<bits/stdc++.h>

using namespace std ;

void printsubarray(vector<int> a , int start , int end){

    if(end == a.size()){
        return;
    }
    else if (start > end) {
        printsubarray(a, 0, end + 1);
    }
    else{
        cout << "[" ;
        for(int i = start ; i < end ; i++)
           cout << a[i] << "," ;
        cout << a[end] << "]" << endl;
        printsubarray(a , start + 1 , end);
        }
    return;
    }




int main(){
    vector<int> a = {1,2,3};
    printsubarray(a , 0 , 0);
    return 0 ;
}
