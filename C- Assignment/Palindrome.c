#include<stdio.h>

int palindrome(int num);
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if (palindrome(num))
    {
        printf("%d is palindrome number .",num);
    }
    else{
        printf("%d is not palindrome number .",num);
    }
    return 0;
}

int palindrome(int num)
{
    int original = num,reversed = 0,remainder;
    while (num > 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    return (original == reversed);
}