#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
    char str4[50];
    gets(str4);
    if (isalnum(str4))
    {
        printf("character is alphanumbric", str4);
    }
    else
    {
        printf("character is not alphanumberic:", str4);
    }
}