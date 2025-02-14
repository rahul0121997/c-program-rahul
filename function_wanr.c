#include<stdio.h>
#include<conio.h>

void add();
void main() /*function with arguments and no return value*/
{
    int x,y;
    printf("\n enter x :");
    scanf("%d",&x);
    printf("\n enter y :");
    scanf("%d",&y);
    add(x,y);
}

void add(int a, int b)
{
    printf("\n addition: %d ",a+b);
}
