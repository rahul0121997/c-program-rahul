#include <stdio.h>
int factorial(int n);

int main() {
    int num;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d.\n", num, factorial(num));

    return 0;
}


int factorial(int n) {
    if (n <= 1) {
        return 1; 
    } else {
        return n * factorial(n - 1);
    }
}
