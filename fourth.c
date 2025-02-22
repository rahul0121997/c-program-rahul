#include<stdio.h>
#include<conio.h>

int main()

{
    int k;
    for (int i = 10;i >= 0; i--)
    {
        for (int k = 0;k <= 9-i; k++)
        {
            printf(" ");
        }
        for (int j = 0;j <= i; j++)
        {
            printf(" %c",'A' + j);
        }
        printf("\n");
    }
    return 0;
}
