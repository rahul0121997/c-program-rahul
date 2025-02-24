#include<stdio.h>
#include<conio.h>
#include<string.h>       //using string in program
#include<ctype.h>                          

void main()
{
    char str1[50],str2[50],str3[50] ,str4[50],l1,result;
    printf("enter string 1:");
    gets(str1);
    printf("string 1 is : %s ",str1);
    l1=strlen(str1);                              //len = length of string.
    // printf("\n length of str1 : %d :",l1);
    // strrev(str1);
    // sunilprintf("\nthe  reverse string is : %s",str1);
    printf("\nenter string 2:");
    gets(str2);
    printf("\nenter string 3:");
    gets(str3);
    strcat(str1,str3);
    printf("\nafter concatnation string 1 is : %s",str1);
    strcpy(str1,str2); //here copy from str2 to copy in str 1
    printf("\nafter copy str2 : %s ",str1);
    printf("enter a character:");

}