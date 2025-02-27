#include<stdio.h>

int main()
{
    int i, j, row, col, sum = 0;
    printf("enter row and col of an array:\n");
    scanf("%d %d", &row, &col);
    int a[row][col];
    printf("enter the elements of 2 dimensonal array:\n");
    for(i = 0;i < row; i++)
    {
        for(j = 0;j < col; j++)
        {
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("sum of 2 dimensonal array is:%d",sum);
    printf("\n2dimensonal array is :\n");
    for(i = 0;i < row; i++)
    {
        for (j = 0;j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}