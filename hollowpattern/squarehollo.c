#include<stdio.h>
#include<conio.h>

int main()

{
    for (int i = 1;i <= 5; i++)
    {
        for (int j = 1;j <= 5; j++)
        {
            if(i==1 || j==1 || i==5 || j==5)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }
            // printf("*");
        }
        printf("\n");
    }
    return 0;
}