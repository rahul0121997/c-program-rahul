#include<stdio.h>
#include<conio.h>

sub(int a,int b) /*function with arguments and with return value*/
{
    return a-b;
}

void main()
{
    int x,y;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    sub(x,y);
    printf("\nsubtraction is :%d",sub(x,y));
}