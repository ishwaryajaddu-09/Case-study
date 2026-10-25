#include <stdio.h>

int main() {
    int choice;
    float balance, amount;

    printf("Enter current balance: ");
    scanf("%f", &balance);

    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Current balance: %.2f", balance);
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Transaction successful\n");
                printf("Remaining balance: %.2f", balance);
            } else {
                printf("Insufficient balance");
            }
            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0) {
                balance += amount;
                printf("Deposit successful\n");
                printf("Updated balance: %.2f", balance);
            } else {
                printf("Invalid amount");
            }
            break;

        default:
            printf("Invalid option");
    }

    return 0;
}
