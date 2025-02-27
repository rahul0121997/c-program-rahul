#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    clock_t start_iterative = clock();
    long long result_iterative = factorial_iterative(num);
    clock_t end_iterative = clock();
    double time_iterative = ((double)(end_iterative - start_iterative)) / CLOCKS_PER_SEC;

    clock_t start_recursive = clock();
    long long result_recursive = factorial_recursive(num);
    clock_t end_recursive = clock();
    double time_recursive = ((double)(end_recursive - start_recursive)) / CLOCKS_PER_SEC;

    printf("Factorial (Iterative) of %d is: %lld\n", num, result_iterative);
    printf("Time taken by Iterative Method: %f seconds\n", time_iterative);
    
    printf("Factorial (Recursive) of %d is: %lld\n", num, result_recursive);
    printf("Time taken by Recursive Method: %f seconds\n", time_recursive);

    return 0;
}
