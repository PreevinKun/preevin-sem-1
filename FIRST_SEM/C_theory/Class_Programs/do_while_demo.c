#include <stdio.h>

int main() {
    int i = 1;
    int account_number = 1000;
    float balance = 500.00;
    int entered_account_number;
    float deposit, withdraw;
    int choice;

    do {
        printf("----------welcome to my bank---------\n");
        printf("1. create account\n");
        printf("2. deposit money\n");
        printf("3. withdraw money\n");
        printf("4. check balance\n");
        printf("5. exit\n");

        printf("enter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("account created successfully\n");
                break;

            case 2:
                printf("Enter your account number: ");
                scanf("%d", &entered_account_number);
                if (entered_account_number != account_number) {
                    printf("invalid account number\n");
                    break;
                }

                printf("enter amount to deposit: ");
                scanf("%f", &deposit);
                balance += deposit;
                printf("amount deposited successfully\n");
                break;

            case 3:
                printf("Enter your account number: ");
                scanf("%d", &entered_account_number);
                if (entered_account_number != account_number) {
                    printf("invalid account number\n");
                    break;
                }

                printf("enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw > balance) {
                    printf("insufficient balance\n");
                } else {
                    balance -= withdraw;
                    printf("amount withdrawn successfully\n");
                }
                break;

            case 4:
                printf("your current balance is: %.2f\n", balance);
                break;

            case 5:
                printf("thank you for using our bank services\n");
                break;

            default:
                printf("invalid choice\n");
        }

        i++;
    } while (choice != 5 && i <= 180);

    return 0;
}