#include<stdio.h>

int main()
{
    int i, j, row, col;
    printf("enter a row and col:\n");
    scanf("%d %d",&row, &col);
    int a[row][col];
    printf("enter the element of row and col:\n");
    for(i = 0;i < row; i++)
    {
        for(j = 0;j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix is :\n");
    for(i = 0;i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}