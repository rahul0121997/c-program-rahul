#include <stdio.h>
#include <conio.h>

void main() /* function with no arguments and no return value */
{
    printstar();
    printf("hello world \n");
    printstar();
    return 0;
}
void printstar()
    {
        for (int i = 0; i < 50; i++)
        {
            printf("*");
        }
        printf("\n");
    }
