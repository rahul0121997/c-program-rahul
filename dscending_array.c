#include<stdio.h>
#include<conio.h>

void main()
{
    int i ,j ,n ,temp ,a[n];
    printf("enter the number N \n");
    scanf("%d",&a[n]);

    printf("enter the 1d aarray numbers \n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        for (j = i + 1;j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
    }
    printf("the ascending array is: \n");
    for(int i = 0;i < n; i++)
    {
        printf("%d\n" ,a[i]);
    }
    return 0;
}