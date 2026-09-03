#include <stdio.h>

typedef struct
{
    int acc_num;
    char name[50];
    float balance;
} BankAccount;

void deposit(BankAccount *acc);
void withdraw(BankAccount *acc);

int main()
{
    BankAccount acc1;

    printf("Enter Account Number: ");
    scanf("%d", &acc1.acc_num);

    printf("Enter Name: ");
    scanf(" %[^\n]", acc1.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc1.balance);

    deposit(&acc1);
    withdraw(&acc1);

    printf("\n--- Final Account Details ---\n");
    printf("Account Number: %d\n", acc1.acc_num);
    printf("Name: %s\n", acc1.name);
    printf("Balance: %.2f\n", acc1.balance);

    return 0;
}

void deposit(BankAccount *acc)
{
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    acc->balance = acc->balance + amount;
    printf("Deposit successful.\n");
}

void withdraw(BankAccount *acc)
{
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= acc->balance)
    {
        acc->balance = acc->balance - amount;
        printf("Withdrawal successful.\n");
    }
    else
    {
        printf("Insufficient funds!\n");
    }
}