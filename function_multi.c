#include<stdio.h>
#include<conio.h>

void multi();
void main() /*function with arguments and no return value*/
{
    int x,y;
    printf("\n enter x :");
    scanf("%d",&x);
    printf("\n enter y :");
    scanf("%d",&y);
    multi(x,y);
}

void multi(int a, int b)
{
    printf("\n multiplication: %d ",a*b);
}
