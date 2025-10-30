#include <stdio.h>

int main() {
    int choice;
    float balance = 10000.0, amount, bonus;

    do {
        printf("\n--------------------------------------\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount! Deposit must be positive.\n");
                } 
                else {
                    bonus = 0;
                    if (amount > 25000) {
                        bonus = amount * 0.01;
                        printf("Bonus of ₹%.2f added!\n", bonus);
                    }

                    balance += (amount + bonus);
                    balance -= 5;  // service charge
                    printf("Service charge ₹5 applied.\n");
                    printf("Updated Balance: ₹%.2f\n", balance);
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount! Withdrawal must be positive.\n");
                } 
                else if (amount > balance) {
                    printf("Withdrawal not allowed! Insufficient balance.\n");
                } 
                else {
                    balance -= amount;
                    balance -= 5;  // service charge
                    printf("Service charge ₹5 applied.\n");
                    printf("Updated Balance: ₹%.2f\n", balance);
                }
                break;

            case 3:
                printf("Your Current Balance: ₹%.2f\n", balance);
                break;

            case 4:
                printf("Thank you for banking with us!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
