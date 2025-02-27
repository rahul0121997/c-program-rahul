#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum, digit, digits;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    sum = 0;

    // Find the number of digits in the number
    digits = 0;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;

    // Calculate the sum of each digit raised to the power of 'digits'
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Challenge: Find all Armstrong numbers between 1 and 1000
    printf("\nAll Armstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        temp = i;
        sum = 0;
        digits = 0;

        // Find the number of digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = i;

        // Calculate the sum of each digit raised to the power of 'digits'
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Print Armstrong numbers
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
