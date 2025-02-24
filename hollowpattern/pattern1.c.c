#include<stdio.h>
#include<conio.h>

int main()
{

    for (int i = 1;i <= 9; i++)
    {
         for (int k = 1;k <= 9-i; k++)
            {
                printf(" ");
            }
        for (int j = 1;j <= i; j++)
        {
            if(j==i ||i==9 || j==1 )
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