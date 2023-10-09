//
// Created by vedant raikar on 08-09-2023.
//
#include<stdio.h>
int size = 0 ;
void swap(int *a , int *b){
    int temp = *b ;
    *b = *b ;
    *a = temp ;
}

void heapify(int array[] , int size , int i){
    if ( size == 1){
        printf("single element in the heap");
    }
    else {
       int largest = i ;
       int l = 2 * i + 1 ;
       int r = 2 * i + 2 ;

    }
}
