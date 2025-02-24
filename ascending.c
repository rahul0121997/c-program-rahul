#include<stdio.h>

int main()
{
    int i, j, n,temp;
    printf("enter the N:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the element :\n");
    for (i = 0;i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < n; i++)
    {
        // scanf("%d",&a[i]);
        for (j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("ascending array order is:\n");
    for(i = 0;i < n; i++)
    {
        printf("%d ",a[i]);
    }
}