#include<stdio.h>
#include<conio.h>

int fibonacci(int n);
int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("fibonacci series:");
    for (int i = 0;i < num; i++)
    {
        printf("%d ",fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}