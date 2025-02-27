#include <stdio.h>

int main() {
    int num, sum = 0, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num;

    while (num != 0) {
        digit = num % 10;          
        sum += digit;              
        reverse = reverse * 10 + digit; 
        num /= 10;                
    }

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reverse);

    return 0;
}
