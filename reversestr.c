#include<stdio.h>

void reversestr(char str[]);

int main()
{
    char str[50];
    printf("enter a string :");
    scanf("%s",&str);
    reversestr(str);
    return 0;
}

void reversestr(char str[])
{
    int len = strlen(str);
    printf("reverse string is :");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}