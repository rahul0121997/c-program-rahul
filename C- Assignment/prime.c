#include <stdio.h>


int is_prime(int num, int divisor) {
    if (num <= 1) {
        return 0; 
    }
    if (divisor == num / 2 + 1) {
        return 1;
    }
    if (num % divisor == 0) {
        return 0; 
    }
    return is_prime(num, divisor + 1); 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num, 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
