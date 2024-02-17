#include<stdio.h>
#include<stdlib.h>


void swap(int* arr, int i, int j) 
{ 
	int temp = arr[i]; 
	arr[i] = arr[j]; 
	arr[j] = temp; 
} 

 
void selectionsort(int arr[] , int n){
	int min  , i  , j;
	for(i = 0 ; i < n ; i++){
		min = i;
		for(j = i+1 ; j < n ; j++ ){
			if(arr[j] < arr[min]){
				swap(arr, i , j);
			}
		}
	}
}

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

 
int main() 
{ 
    int n ; 
    int i = 0 ;
    printf("Enter the size of the array : ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i = 0 ; i < n ; ++i){
    	scanf("%d",&arr[i]); 
	}
	selectionsort(arr, n); 
	printf("Sorted array: "); 
	printArray(arr, n); 
	return 0; 
}

