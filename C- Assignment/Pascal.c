#include <stdio.h>

int main() {
    int n, i, j, coefficient;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        coefficient = 1; 
        for (j = 0; j <= i; j++) {
            printf("%d ", coefficient);
            coefficient = coefficient * (i - j) / (j + 1);  // Calculate next coefficient
        }

        printf("\n");
    }

    return 0;
}
