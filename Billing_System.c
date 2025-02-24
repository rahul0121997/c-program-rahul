#include <stdio.h>

int main()

{
    int choice, quantity, n, total = 0, amount = 0;
    char moreorder = 'y';
    float price = 0;
    while (moreorder == 'y' || moreorder == 'Y')
    {
        printf("\nWelcome to the Food Billing System\n");
        printf("=====================================\n");
        printf("1. Burger        - price = 180\n");
        printf("2. Pizza         - price = 120\n");
        printf("3. Sandwich      - price = 80\n");
        printf("4. French Fries  - price = 60\n");
        printf("5. Soda          - price = 40\n");
        printf("=====================================\n");

        printf("enter your choice (1-5):");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("you have selected burger.\n");
            price = 180;
            break;
        case 2:
            printf("you have selected pizza.\n");
            price = 120;
            break;
        case 3:
            printf("you have selected sandwich.\n");
            price = 80;
            break;
        case 4:
            printf("you have selected french fries.\n");
            price = 60;
            break;
        case 5:
            printf("you have selected soda.\n");
            price = 40;
            break;
        default:
            printf("invalid choice please try again");
            continue;
        }
        printf("enter quantity:");
        scanf("%d", &quantity);

        amount = quantity * price;
        printf("amount = %d\n", amount);

        total = total + quantity * price;

        printf("do you want to oder more (y/n):");
        scanf(" %c", &moreorder);
    }
    printf("\ntotal amount is = %d\n", total);
    return 0;
}
