#include <stdio.h>

// Function to calculate nth Fibonacci number using recursion
int fibonacci(int n, int *count) {
    // Increment the count for each function call
    (*count)++;

    if (n <= 1) {
        return n;
    } else {
        // Recursive calls to calculate Fibonacci numbers
        return fibonacci(n - 1, count) + fibonacci(n - 2, count);
    }
}

int main() {
    int n, result, count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = fibonacci(n, &count);

    printf("The %dth Fibonacci number is: %d\n", n, result);
    printf("Total basic operations performed: %d\n", count);

    return 0;
}

