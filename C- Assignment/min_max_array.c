#include <stdio.h>

int main()
{
    int i, j, n, temp, min, max;
    printf("enter the N:\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    for (i = 0; i < n; i++)
    {
        // scanf("%d",&a[i]);
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("ascending array order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}