#include<stdio.h>
#include<conio.h>

int main() 
{

    int rno, s1, s2, s3, total;
    double per;
    char sname[50];
    printf("enter a student name :");
    gets(sname);
    printf("\nenter a student roll number :");
    scanf("%d" , &rno);
    printf("\nenter student marks of subject 1 :");
    scanf("%d" , &s1);
    printf("\nenter a marks subject 2 :");
    scanf("%d", &s2);
    printf("\nenter a marks subject 3:");
    scanf("%d" , &s3);

    total = s1+s2+s3;
    per = total/3 ;

    printf("\nstudent name: %s", sname);
    printf("\nroll number is: %d" ,rno);
    printf("\ntotal is: %d" ,total);
    printf("\npercentage: %lf", per);

    if (per > 90)
    {
        printf("\nGrade A");
    }
    else if(per > 75 || per <= 90)
    {
        printf("\nGrade B");
    }
    else if(per > 50 || per <= 75)
    {
        printf("\nGrade C");
    }
    else if(per <= 50)
    {
        printf("\nGrade D");
    }
    return 0;

}