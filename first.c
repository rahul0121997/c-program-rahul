#include<stdio.h>
#include<conio.h>

int main()

{
    for (int i = 0;i < 10; i++)
    {
        for (int j = 0;j <= i; j++)
        {
            printf("%c",'A' + j);
        }
        printf("\n");
    }
    return 0;
}
