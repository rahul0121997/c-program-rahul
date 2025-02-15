#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("enter number N:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number to dislay:\n",n);
    for(int i = 0;i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the number you enterd is:\n");
    for (int i = 0;i < n; i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}