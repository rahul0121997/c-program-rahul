#include <stdio.h>

// Defining a constant
#define PI 3.14159

int main() {
    int age = 25;           
    char grade = 'A';        
    float height = 5.9f;     

    printf("Age: %d\n", age);             
    printf("Grade: %c\n", grade);         
    printf("Height: %.2f meters\n", height); 

    // Displaying the constant value of PI
    printf("Value of PI: %.5f\n", PI);    // Displaying the constant PI

    return 0;
}
