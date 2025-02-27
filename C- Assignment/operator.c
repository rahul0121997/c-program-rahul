#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    if (num2 != 0) {
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    // Relational operations
    printf("\nRelational Operations:\n");
    printf("%d == %d: %s\n", num1, num2, num1 == num2 ? "True" : "False");
    printf("%d != %d: %s\n", num1, num2, num1 != num2 ? "True" : "False");
    printf("%d > %d: %s\n", num1, num2, num1 > num2 ? "True" : "False");
    printf("%d < %d: %s\n", num1, num2, num1 < num2 ? "True" : "False");
    printf("%d >= %d: %s\n", num1, num2, num1 >= num2 ? "True" : "False");
    printf("%d <= %d: %s\n", num1, num2, num1 <= num2 ? "True" : "False");

    // Logical operations
    printf("\nLogical Operations:\n");
    printf("%d && %d: %s\n", num1, num2, (num1 && num2) ? "True" : "False");
    printf("%d || %d: %s\n", num1, num2, (num1 || num2) ? "True" : "False");
    printf("!%d: %s\n", num1, (!num1) ? "True" : "False");
    printf("!%d: %s\n", num2, (!num2) ? "True" : "False");

    return 0;
}
