
#include <stdio.h> 


void swap(int* arr, int i, int j) 
{ 
	int temp = arr[i]; 
	arr[i] = arr[j]; 
	arr[j] = temp; 
} 

 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	int opcount = 0 ; 
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++){
		
		     opcount++;
			if (arr[j] > arr[j + 1]) {
			
				swap(arr, j, j + 1); }
			}
	}
			printf(" number of basic operation : %d \n" , opcount);
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
	bubbleSort(arr, n); 
	printf("Sorted array: "); 
	printArray(arr, n); 
	return 0; 
}

