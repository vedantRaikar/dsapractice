#include<stdio.h>
#include<stdlib.h>

void printarray(int arr[] , int s){
	int i ; 
	for(i = 0 ; i < s ; i++){
		printf("%d\n" , arr[i]);
	}
}

void insertionsort(int arr[] , int s ){
	int step ;
	int key ;
	int j ;
	for(step = 1 ; step < s ; step++){
		key = arr[step];
		j = step -1 ; 
		
		while(key < arr[j] && key > 0){
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;
	}
	
}

// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionsort(data, size);
  printf("Sorted array in ascending order:\n");
  printarray(data, size);
  return 0 ; 
  
}
