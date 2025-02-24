#include <stdio.h>

void displayMenu() {
    printf("\nWelcome to the Food Billing System\n");
    printf("=====================================\n");
    printf("1. Burger        - $5\n");
    printf("2. Pizza         - $8\n");
    printf("3. Sandwich      - $3\n");
    printf("4. French Fries  - $2\n");
    printf("5. Soda          - $1\n");
    printf("=====================================\n");
}

float calculateTotal(int choice, int quantity) {
    float price = 0.0;
    switch(choice) {
        case 1: price = 5.0; break;
        case 2: price = 8.0; break;
        case 3: price = 3.0; break;
        case 4: price = 2.0; break;
        case 5: price = 1.0; break;
        default: printf("Invalid choice\n"); return 0.0;
    }
    return price * quantity;
}

int main() {
    int choice, quantity;
    float total = 0.0;
    char continueOrder;

    do {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        total += calculateTotal(choice, quantity);

        printf("Do you want to order anything else? (Y/N): ");
        getchar(); // To consume the newline character left by previous input
        scanf("%c", &continueOrder);

    } while (continueOrder == 'Y' || continueOrder == 'y');

    printf("\nTotal Bill: $%.2f\n", total);
    printf("Thank you for your order!\n");

    return 0;
}
