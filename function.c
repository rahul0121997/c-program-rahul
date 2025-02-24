#include<stdio.h>
#include<conio.h>

void sum(int a,int b) /*function with arguments and with no return value*/
{
    printf("addition :%d",a+b);
}

void main()
{
    int x,y;
    printf("enter x:");
    scanf("%d" , &x);
    printf("enter y:");
    scanf("%d", &y);
    sum(x,y);
}