#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int main()

{
    char str1='A';
    if (isalnum(str1))
    {
        printf("%c is an alphanumberic character.",str1 );
    }
    else
    {
        printf("%c it is not alphanumberic character",str1);
    }
    return 0;
}