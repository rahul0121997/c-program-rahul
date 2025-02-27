#include<stdio.h>

int main()
{
    int i, j, n;
    printf("enter the N:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the element :\n");
    for (i = 0;i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("1 dimensonal array order is:\n");
    for(i = 0;i < n; i++)
    {
        printf("%d ",a[i]);
    }
}