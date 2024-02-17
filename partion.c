#include <stdio.h>


int isSubsetSum(int arr[], int n, int sum) {
    // If set is empty or target sum is 0, there's a subset with that sum
    if (n == 0 || sum == 0) {
        return 1;
    }

    // If last element is greater than the sum, exclude it
    if (arr[n - 1] > sum) {
        return isSubsetSum(arr, n - 1, sum);
    }

    // Otherwise, try both including and excluding last element
    return isSubsetSum(arr, n - 1, sum) || isSubsetSum(arr, n - 1, sum - arr[n - 1]);
}

int main() {
	int n ; 
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf()
    
    
    int sum = 10; // Target sum

    if (isSubsetSum(arr, n, sum)) {
        printf("Subset with sum %d exists\n", sum);
    } else {
        printf("No subset with sum %d exists\n", sum);
    }

    return 0;
}

