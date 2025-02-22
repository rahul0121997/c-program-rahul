#include<stdio.h>
#include<conio.h>

int isprime(int num);
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if(isprime(num))
    {
        printf("%d  is a prime number.",num);
    }
    else
    {
        printf("%d  is not prime number.",num);
    }
    return 0;
}

int isprime(int num)
{
    if(num < 2)
    {
        return 0;
    }
    for (int i = 2;i < num; i++)
    {
        if(num % 2 == 0)
        {
            return 0;
        }
        return 1;
    }
}