#include <stdio.h>

int main() {
    int num = 10; 
    int *ptr = &num; 
    printf("Before :\n");
    printf("Value of num: %d\n", num); 
    *ptr = 20;  
    printf("\nAfter using pointer:\n");
    printf("Value of num: %d\n", num); 
    
    return 0;
}
