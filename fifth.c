#include<stdio.h>
#include<conio.h>

int main()

{
    int k;
    for (int i = 0;i < 10; i++)
    {
        // for (int k = 0;k <= i; k++)
        // {
        //     printf(" ");
        // }
        for (int j = 0;j <= i; j++)
        {
            printf(" %c",'A' + i);
        }
        printf("\n");
    }
    return 0;
}
