#include<stdio.h>

int main()
{

    int i, j, n, sum = 0;
    printf("enter N:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array:\n");
    for (i = 0;i < n; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("sum of array elements:%d\n",sum);
    printf("1 dimensonal array is:\n");
    for (i = 0; i< n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}