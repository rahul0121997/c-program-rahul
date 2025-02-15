#include<stdio.h>
#include<conio.h>
/*taking input fron user and print that number with addition*/
int main()
{
    int n ,sum=0;
    printf("enter number N:");
    scanf("%d",&n);
    int a[n];
    printf("enter %d number to dislay:\n",n);
    for(int i = 0;i < n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the number you enterd is:\n");
    for (int i = 0;i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("the addition:%d \n",sum);
    return 0;
}