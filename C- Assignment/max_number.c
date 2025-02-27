#include <stdio.h>

int main()
{
    int a, b, c;
    int small, max;
    printf("enter number A:");
    scanf("%d", &a);
    printf("\nenter number B:");
    scanf("%d", &b);
    printf("\nenter number C:");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("\nA is max number");
        }
        else
        {
            printf("\nC is max number");
        }
    }
    else if (b > c)
    {
        if (b > a)
        {
            printf("\nB is max number");
        }
        else
        {
            printf("\nC is max number");
        }
    }
    else
    {
        printf("\nC is max number");
    }
    if (a <= b)
    {
        if (a <= c)
        {
            printf("\nA is small number");
        }
        else
        {
            printf("\nC is small number");
        }
    }
    else if (b <= c)
    {
        if (b <= a)
        {
            printf("\nB is small number");
        }
        else
        {
            printf("\nC is small number");
        }
    }
    else
    {
        printf("\nC is small number");
    }

    // using switch-case.
    max = (a >= b && a >= c) ? 1 : (b >= a && b >= c) ? 2
                                                      : 3;

    switch (max)
    {
    case 1:
        printf("\nA is max number.");
        break;
    case 2:
        printf("\nB is max number.");
        break;
    case 3:
        printf("\nC is max number");
        break;
    default:
        printf("\nError in operation");
        break;
    }

    small = (a <= b && a <= c) ? 1 : (b <= a && b <= c) ? 2
                                                        : 3;

    switch (small)
    {
    case 1:
        printf("\nA is small number.");
        break;
    case 2:
        printf("\nB is small number.");
        break;
    case 3:
        printf("\nC is small number");
        break;
    default:
        printf("\nError in operation");
        break;
    }
    return 0;
}