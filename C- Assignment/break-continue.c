#include <stdio.h>

int main() {
    int i;


    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;  // Skip printing number 3
        }

        if (i == 5) {
            break;  // Stop printing when reaching number 5
        }

        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
