#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);


    if (num % 2 == 0) {
        printf("The number %d is even.\n", num);
    } else {
        printf("The number %d is odd.\n", num);
    }

    if (num > 0) {
        printf("The number %d is positive.\n", num);
    } else if (num < 0) {
        printf("The number %d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number %d is a multiple of both 3 and 5.\n", num);
    } else {
        printf("The number %d is not a multiple of both 3 and 5.\n", num);
    }

    return 0;
}
