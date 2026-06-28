//Bank Account Systm
#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    float deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    b.balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= b.balance)
        b.balance -= withdraw;
    else
        printf("Insufficient Balance!\n");

    printf("\nAccount Number : %d", b.accNo);
    printf("\nCustomer Name : %s", b.name);
    printf("\nAvailable Balance : %.2f", b.balance);

    return 0;
}